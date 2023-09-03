#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0) return 1;
    int result = n*factorial(n-1);
    return result;
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}