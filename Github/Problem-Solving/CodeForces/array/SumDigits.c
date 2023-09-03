// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K?fbclid=IwAR1PWQ_7dgygtn4eaAoZrU5KUai9hkNqeMVPKHokjNBhRvONUB61QRX4bTI

// 

#include <stdio.h>
int main()
{
    int n,sum=0,m;
    scanf("%d",&n);
    while (n>0)
    {
        m = n%10;
        sum = sum + m;
        n = n/10;
    }
    printf("%d\n",sum);
    
    return 0;
}