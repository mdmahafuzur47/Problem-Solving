#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,flag=1;
        cin>>n;
        if(n==0 || n==1){
            flag=1;
        }
        for(int i=2;i<=n; i++){
            if(n%i==0){
                flag=0;
                break;
            }
        }
        flag? cout<<"Yes"<<endl : cout<<"No"<<endl;
    }
    return 0;
}