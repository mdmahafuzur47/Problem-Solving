#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int frq[104] = {0};
    for (int i = 0; i < size; i++)
    {
        frq[arr[i]]++;
    }
    int totalDublicateElement = 0;
    for (int i = 0; i < 104; i++)
    {
        if (frq[i] > 1)
        {
            totalDublicateElement++;
            // cout << i << "=" << frq[i] << endl;
        }
    }
    cout << totalDublicateElement << endl;
    return 0;
}