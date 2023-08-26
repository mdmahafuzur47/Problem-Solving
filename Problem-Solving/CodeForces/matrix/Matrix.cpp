//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

//solved problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int primarySum = 0;
    int secondarySum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                primarySum+=arr[i][j];
            }
            if((i+j) == (n-1)){
                secondarySum+=arr[i][j];
            }
        }
    }
    cout<<abs(primarySum - secondarySum)<<endl;
    return 0;
}