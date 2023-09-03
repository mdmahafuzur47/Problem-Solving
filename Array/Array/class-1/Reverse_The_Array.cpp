// Using Two pointer Technologies.....

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
    cout<<"Without Reverse Array"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    int j=size-1,i=0;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<endl<<"With Reverse Array"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}