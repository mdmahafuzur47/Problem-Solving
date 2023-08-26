// https://www.codingninjas.com/studio/problems/find-duplicate-in-array_1112602?leftPanelTab=0


// method = frquency array

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int frq[n];
    for(int i=0; i<n; i++){
        arr[i] = frq[i+1]++;
    }
    for(int i=0; i<n; i++){
        printf("%d",frq[i]);
    }
    

    return 0;
}