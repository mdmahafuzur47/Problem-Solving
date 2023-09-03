//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E
// solved problem

#include <bits/stdc++.h>
using namespace std;
void bainery(int n){
    if(n==0) return;
    bainery(n/2);
    cout<<n%2;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    bainery(n);
    cout<<endl;
    }
    return 0;
}