// https://www.codingninjas.com/studio/problems/second-largest-element-in-the-array_873375?leftPanelTab=0

// Selection Sorting Method

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<arr[1]<<endl;
    return 0;
}
