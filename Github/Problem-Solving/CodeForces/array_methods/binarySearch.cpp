#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    // binarySearch 
    cout<<endl;
    int x;
    cin>>x;
    int l=0,r=size-1,mid,index;
    while(l<=r){
        mid = (l+r)/2;
        if(arr[mid]==x){
            index=mid;
            break;
        }else if(arr[mid] < x){
            l = mid + 1;
        }else if(arr[mid] > x){
            r = mid -1;
        }
    }
    cout<<index<<endl;

    return 0;
}