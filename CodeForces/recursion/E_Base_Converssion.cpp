// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E

// Solved

#include <bits/stdc++.h>
using namespace std;

void bainary(int n)
{
    if (n == 0)
        return;
    bainary(n / 2);
    cout << n % 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bainary(n);
        cout << endl;
    }
    return 0;
}

// #include<stdio.h>
// void bainary(int n){
//     if(n==0) return;
//     bainary(n/2);
//     printf("%d",n%2);
// }
// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n;
//         scanf("%d",&n);
//         bainary(n);
//         printf("\n");
//     }
// }