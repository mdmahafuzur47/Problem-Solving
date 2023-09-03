#include <bits/stdc++.h>
using namespace std;

void numbers(int n)
{
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i == n)
    //     {
    //         cout << i;
    //     }
    //     else
    //     {
    //         cout << i << " ";
    //     }
    // }
    if(n==0){
        return;
    }
    int a =1;
    // cout<<a<<" ";
    cout<<n-a<<" ";
    numbers(n-1);
}
int main()
{
    int n;
    cin >> n;
    numbers(n);
    // cout<< numbers(n);
    cout << endl;
    return 0;
}