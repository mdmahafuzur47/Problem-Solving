
#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int frq[1000000] = {0};
    for (int i = 1; i <= n; i++)
    {
        // int val = arr[i];
        // frq[val] += 1;
        frq[arr[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", frq[i]);
    }

    return 0;
}