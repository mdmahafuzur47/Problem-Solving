#include <bits/stdc++.h>
using namespace std;
int fabo(int n){                     
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fabo(n-1)+fabo(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<fabo(n)<<endl;
    return 0;
}