#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size,x;
    cin >> size >> x;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // linnerSearch
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            cout << i << endl;
            break;
        }
    }

    
    return 0;
}