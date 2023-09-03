#include <bits/stdc++.h>
using namespace std;

int minValue(int arr[],int size,int i){
    if(size == i){
        return INT_MAX;
    }
    int value = minValue(arr,size,++i);
    if(value > arr[i]){
        return arr[i];
    }else{
        return value;
    }

}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int result = minValue(arr,size,0);
    // cout<<INT_MIN<<endl;
    cout<<result<<endl;
    return 0;
}