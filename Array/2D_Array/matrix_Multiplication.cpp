#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r1,r2,c1,c2;
    cin>>r1>>c1>>r2>>c2;
    if(r1!=c2){
        cout<<"Incorrect row col"<<endl;
        return 0;
    }
    int m1[r1][c1],m2[r2][c2];
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<<"m1 "<<"["<<i<<"]"<<"["<<j<<"]"<<"=>";
            cin>>m1[i][j];
        }
    }
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<<"m2 "<<"["<<i<<"]"<<"["<<j<<"]"<<"=>";
            cin>>m2[i][j];
        }
    }
    int mul[c1][r2];
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            mul[i][j] = 0;
            for(int k=0; k<r2; k++){
                mul[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    for(int i=0; i<c1; i++){
        for(int j=0; j<r2; j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

