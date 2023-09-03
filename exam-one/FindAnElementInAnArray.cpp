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
    int x;
    cout<<"Enter a Element : ";
    cin>>x;
    int i=0,j=size-1,flag=0,index;
    while(i<j){
        if(arr[i] == x){
            flag=1;
            index=i;
            break;
        }else if(arr[j] == x){
            flag=1;
            index=j;
            break;
        }
        i++;
        j--;
    }
    if(flag){
        cout<<"Element found "<<index<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}