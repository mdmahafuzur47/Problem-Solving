// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G?fbclid=IwAR08HGlo_fqMoey9p1RTSZZYEzMEgAQAz9qbzYnZbRuZvXHmVG8E-A6YzRs

//Accepted.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int i=0, j=n-1,flag=0;
    while (i<j)
    {
        if(arr[i] != arr[j]){
            flag = 1;
            break;
        }
        i++;
        j--;
    }
   if(flag == 1){
    printf("NO\n");
   }else{
    printf("YES\n");
   }
    
    return 0;
}