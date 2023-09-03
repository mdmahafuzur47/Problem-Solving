#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while (t--){
     int size,m;
    scanf("%d %d", &size,&m);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }    
    int i=m+1, j=size-1,temp=0;
    while(i<j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
   }

    return 0;
}