#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    if(m!=n){
        cout<<"Please enter square matrix"<<endl;
        return 0;
    }
    int a[m][n];
    // input an array of matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"Input Value of Matrix a"<<"["<<i<<"]"<<"["<<j<<"]"<<" =";
            cin>>a[i][j];
        }
    }
    int flag = 0;
    // print an array of matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
            if(i!=j && a[i][j]!=0){
                flag = 1;
                break;
            }
        }
        cout<<endl;
    }
    if(flag){
        cout<<"Given Matrix is not a diagonal Matrix."<<endl;
    }else{
        cout<<"Given Matrix is a diagonal Matrix."<<endl;
    }
    return 0;
}