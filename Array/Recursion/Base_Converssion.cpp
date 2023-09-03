#include <bits/stdc++.h>
using namespace std;

int bainery(int n){
    if(n==0){
        return 0;
    }
    int value = bainery(n/2)
    int result = n%2 + 10  * value;
    return result;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int value =  bainery(n);
        cout<<value<<endl;
    }
    return 0;
}