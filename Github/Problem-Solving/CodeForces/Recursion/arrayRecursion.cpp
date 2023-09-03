#include <bits/stdc++.h>
using namespace std;

void arrayPrint(int a[],int n,int i){
    if(n==i) return;
    cout<<a[i]<<" ";
    arrayPrint(a,n,i+1);
    cout<<a[i]<<" ";
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    arrayPrint(a,n,0);

    return 0;
}