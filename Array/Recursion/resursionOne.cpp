#include <bits/stdc++.h>
using namespace std;

int power(int x,int n){
    if(n==0){
        return 1;
    }
    int pow = power(x,n-1);
    int result = x * pow;
    return result;
}

int main()
{
    int x,n;
    cin>>x>>n;
    cout<<power(x,n)<<endl;
    return 0;
}

// int power(int n)
// {
//     if(n==0){
//         return 1;
//     }
//     int result = power(n-1);
//     return result;
// }
// int main()
// {
//     int n;
//     cin>>n;
//    cout<<power(n)<<endl;
//    return 0;
// }