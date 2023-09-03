#include <bits/stdc++.h>
using namespace std;
int strLen(char str[], int i)
{
    if (str[i] == '\0')
        return 0;
    int Len = strLen(str,++i);
    return Len + 1;
}
int main()
{
    const int N = 1e5 + 5;
    char str[N];
    scanf("%s", str);
    printf("%d\n", strLen(str, 0));
    return 0;
}