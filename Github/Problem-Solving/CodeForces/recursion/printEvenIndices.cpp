// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

// successfully solved

#include <bits/stdc++.h>
using namespace std;
void indexPrint(int arr[], int n, int i)
{
    if (i >= n)
    {
        return;
    }
    indexPrint(arr, n, ++i);
    if (i % 2 == 0)
    {
        if (i == 0)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    indexPrint(arr, n, 0);
    return 0;
}