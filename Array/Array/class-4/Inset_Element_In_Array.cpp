// Insert the new element into the array;

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
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int position, element;
    cout << "Enter Position: ";
    cin >> position;
    cout << "Which Element Inserted in Array: ";
    cin >> element;
    int j = size - 1;
    if (size > position)
    {
        while (j >= position)
        {
            arr[j + 1] = arr[j];
            j = j-1;
        }
    }
        arr[position] = element;
        size = size + 1;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}