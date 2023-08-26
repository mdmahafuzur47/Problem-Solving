#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int minIndex = i;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] < arr[minIndex])
    //         {
    //             minIndex = j;
    //         }
    //     }
    //     int temp = arr[i];
    //     arr[i] = arr[minIndex];
    //     arr[minIndex] = temp;
    // }
    long long int x;
    while (q--)
    {
        cin >> x;
        int l = 0, r = n - 1, mid;
        bool flag = true;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (arr[mid] == x)
            {
                flag = false;
                break;
            }
            else if (arr[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        (flag) ? cout << "not found" << endl : cout << "found" << endl;
    }

    return 0;
}