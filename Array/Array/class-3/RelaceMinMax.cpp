// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M?fbclid=IwAR1az66nmHPqctEEnov2oTyJQfij4V-J_ROlpCmAn7yMWdy8YQw5sBpGXxU

// modified from me; 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int min=arr[0],minIndex=0,max=arr[0],maxIndex=0;
    for(int i=1; i<size; i++){
        if(min>arr[i]){
            min=arr[i];
            minIndex = i;
        }
        if(max<arr[i]){
            max=arr[i];
            maxIndex=i;
        }
    }
    arr[minIndex] = max;
    arr[maxIndex] = min;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}