#include <iostream>
using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    int N = 1e5+5;
    int frq[N] = {0};
    for (int i = 1; i <= n; i++)
    {
        frq[a[i]]++;
    }
    for (int i = 1; i <=m; i++)
    {
        printf("%d\n", frq[i]);
    }
    return 0;
}