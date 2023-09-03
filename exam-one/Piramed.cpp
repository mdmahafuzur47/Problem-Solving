#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int space = n-1,star=1;
    for (int i = 1; i <= n; i++)
    {
        for(int j=space; j>0; j--){
            cout<<" ";
        }
        for(int j=star; j<=(2*i)-1; j+=2){
            cout<<"*";
        }
        cout << endl;
    }
    return 0;
}