// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J
// solved

#include <bits/stdc++.h>
using namespace std;
long long int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}