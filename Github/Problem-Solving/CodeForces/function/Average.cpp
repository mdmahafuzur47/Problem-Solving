#include <bits/stdc++.h>
using namespace std;

void average(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    float avg = sum / n;
    cout << avg << endl;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    average(a, n);
    return 0;
}