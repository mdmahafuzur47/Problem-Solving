//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L

// solved problem

#include <bits/stdc++.h>
using namespace std;

int summation(int arr[],int n, int i){
    if(n == i){
        return 0;
    }
    int value = summation(arr,n,i+1);
    return value+=arr[i];
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int value = summation(arr,n,0);
    cout<<value<<endl;
    return 0;
}