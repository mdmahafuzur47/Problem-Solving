// using two pointer method 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int i=0,j=size-1, flag=0;
    while(i<j){
        if(arr[i]!=arr[j]){
            flag=1;
            break;
        }
        i++;
        j--;
    }
    if(flag){
        cout<<"Not Palindrome"<<endl;
    }else{
        cout<<"Palindrome"<<endl;
    }
    return 0;
}