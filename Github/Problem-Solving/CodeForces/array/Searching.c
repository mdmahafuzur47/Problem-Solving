// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

//Accepted
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int x,flag=0,index=-1;
    scanf("%d",&x);

    for(int i=0; i<n; i++){
        if(arr[i] == x){
            flag=1;
            index = i;
            break;
        }
    }
    if(flag == 1){
        printf("%d\n",index);
    }else{
        printf("%d\n",index);
    }

    return 0;
}