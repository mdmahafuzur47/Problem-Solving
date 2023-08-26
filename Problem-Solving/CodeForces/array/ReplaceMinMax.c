// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M?fbclid=IwAR1az66nmHPqctEEnov2oTyJQfij4V-J_ROlpCmAn7yMWdy8YQw5sBpGXxU

 //Accepted
 
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min= arr[0],minindex = 0, maxindex = 0, max = arr[0];
    for(int i=1; i<n; i++){
        if(min > arr[i]){
            min = arr[i];
            minindex = i;
        }
        if(max < arr[i]){
            max = arr[i];
            maxindex = i;
        }
    }
    arr[minindex] = max;
    arr[maxindex] = min;
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

}