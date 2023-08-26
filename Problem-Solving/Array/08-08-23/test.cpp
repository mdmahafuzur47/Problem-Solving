// https://www.codingninjas.com/studio/problems/find-duplicate-in-array_1112602?leftPanelTab=0


// method = frquency array

#include <iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int frq[n]={0};
    for(int i=0; i<n; i++){
        frq[arr[i]] ++;
    }
    for(int i=0; i<n; i++){
        if(frq[i] > 1){
            printf("%d\n",i);
        }
    }
    return 0;
}