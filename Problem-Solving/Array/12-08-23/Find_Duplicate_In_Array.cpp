#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        int frq[n]={0};
        for (int i = 0; i < n; i++)
        {
            frq[arr[i]]++;
        }
        for (int i = 0; i < n; i++){
            if(frq[i]>1){
            cout << i <<endl;
            }
        }
    }
    return 0;
}