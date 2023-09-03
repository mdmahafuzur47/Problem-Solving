// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

// successfully solved

#include <bits/stdc++.h>
using namespace std;

void printNumber(int n){
    if(n==0) return;
    printNumber(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    printNumber(n);
    return 0;
}