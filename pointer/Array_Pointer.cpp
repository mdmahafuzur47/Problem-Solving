// large and small values swap using pointers;

#include <bits/stdc++.h>
using namespace std;

void swap(int *arr,int n,int i){
    int min=-1,max=10e7;
    while(i<n){
        if(min > *(arr+i)){
            min = i;
        }
        if(max < *(arr+i)){
            max = i;
        }
        i+1;
    }
    int temp = *(arr+min);
    *(arr+min) = *(arr+max);
    *(arr+max) = temp;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }
    swap(arr,n,0);
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }
    return 0;
}