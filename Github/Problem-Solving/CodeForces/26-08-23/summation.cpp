// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L

// solved problem

#include <bits/stdc++.h>
using namespace std;
long long int summation(long long int arr[],int n,int i){
    if(i >= n){
        return 0;
    }
    long long int value = summation(arr,n,i+1);
    return value+=arr[i];
}
int main()
{
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<summation(arr,n,0);
    return 0;
}