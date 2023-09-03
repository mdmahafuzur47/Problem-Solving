#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    if(r!=c){
        cout<<"Enter Square Matrix"<<endl;
        cin>>r>>c;
    }
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i==j){
                cout<<"*";
                // if(r/2 == i && r/2 == j){
                //     cout<<"X";
                // }
            }else{
                cout<<" ";
            }
            if((i+j)==(r-1)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}