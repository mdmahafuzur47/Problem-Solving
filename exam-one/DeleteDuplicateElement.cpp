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
    int dublicateElement, position;
    for (int i = 0; i < 104; i++)
    {
        if (frq[i] > 1)
        {
            // cout << i << "=" << frq[i] << endl;
            dublicateElement = i;
        }
    }
    // cout<<dublicateElement << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == dublicateElement)
        {
            position = i;
            break;
        }
    }
    // cout<<position<<endl;
    int j = position;
    if (j < size-1)
    {
        for (int j = position; j < size; j++)
        {
            arr[j] = arr[j + 1];
        }
    }
    size = size - 1;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}