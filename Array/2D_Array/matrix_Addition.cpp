#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int m1[r][c],m2[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>m1[i][j];
        }
    }   
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>m2[i][j];
        }
    }
    int add[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            add[i][j] = m1[i][j] + m2[i][j];
        }
    }   
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<add[i][j]<<" ";
        }
        cout<<endl;
    }   
    
    return 0;
}