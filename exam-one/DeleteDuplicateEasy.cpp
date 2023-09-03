#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size; 
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int position;
    for(int i=0;i<size;i++){
        if(arr[i]==arr[i+1]){
            position=i;
            break;
        }
    }
    // cout<<position;
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