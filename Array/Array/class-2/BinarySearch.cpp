// Binary Search

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
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]> arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j]  = temp;
            }
        }
    }
    cout<<"Sorted Array"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"Searching Element :";
    cin>>x;
    int l=0,mid, r=size-1,index;
    while(l<=r){
        mid = (l+r)/2;
        if(arr[mid]==x){
            index = mid;
            break;
        }else if(arr[mid] < x){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<"Searching Element index is : "<<index<<endl;
    return 0;
}