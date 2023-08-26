//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D?fbclid=IwAR3SVZj45e6K0tXt6HFyMwNtaG5wgExTVbhIhyQs9iQFE-7AkdEEwP9LxgU

//Accepted.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);  
    }
    for(int i=0; i<n; i++){
        if(arr[i] <=10){
            printf("A[%d] = %d\n",i,arr[i]);
        }
    }

    return 0;
}