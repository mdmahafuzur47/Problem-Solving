// https://www.codingninjas.com/studio/problems/find-duplicate-in-array_1112602?leftPanelTab=0

// method = frquency in  Array...

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int N = 1e5 + 5;
    int frq[N] = {0};
    for (int i = 0; i < n; i++)
    {
        frq[arr[i]]++;
    }
    for (int i = 0; i < N; i++)
    {
        if (frq[i] >= 1)
        {
            cout << i << "=" << frq[i] << endl;
        }
    }
    return 0;
}