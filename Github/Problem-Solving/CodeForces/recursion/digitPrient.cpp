// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D

#include <bits/stdc++.h>
using namespace std;

void digitPrint(int n){
    if(n==0){
        return;
    }
    digitPrint(n/10);
    cout<<n%10<<" ";
}

int main()
{
    int t;
    cin>>t;
    while(t--){
    long long int n;
    cin>>n;
    if(n){

    digitPrint(n);
    }else{
        cout<<"0";
    }
    cout<<endl;
    }
    return 0;
}