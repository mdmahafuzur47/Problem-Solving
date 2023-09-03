// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

// successfully solved

#include <bits/stdc++.h>
using namespace std;

void printNumber(int n)
{
    if (n == 0)
        return;
    if (n == 1)
    {
        cout << n;
    }
    else
    {
        cout << n << " ";
    }
    printNumber(n - 1);
}
int main()
{
    int n;
    cin >> n;
    printNumber(n);
    return 0;
}