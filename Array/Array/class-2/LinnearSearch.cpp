// Linnear Search Method 


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
    int x;
    cout<<"Searching Element: "; 
    cin>>x;
    int flag = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==x){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout<<"Element found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}