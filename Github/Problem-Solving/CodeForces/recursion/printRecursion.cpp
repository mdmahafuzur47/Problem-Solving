// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

// successfully solved

#include <bits/stdc++.h>
using namespace std;
void printRecursion(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "I love Recursion" << endl;

    printRecursion(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printRecursion(n);
    return 0;
}