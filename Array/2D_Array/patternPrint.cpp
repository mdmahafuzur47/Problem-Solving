/* =>*   *
      * *
       X
      * *
     *   *     */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Please enter Odd number: " << endl;
        cin >> n;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == n / 2 && j == n / 2)
            {
                cout << "X";
            }
            if (i == j || (i + j) == (n - 1))
            {
                if (i != n / 2 && j != n / 2)
                {
                    cout << "*";
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}