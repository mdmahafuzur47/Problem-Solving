// https://www.codingninjas.com/studio/problems/binary-search_972?leftPanelTab=0
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,x;
    cin>> n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>> arr[i];
    }
    cin >> x;
    int l = 0, r = n - 1, mid,index;
    while(l<=r){
        mid = (l+r)/2;
        if(arr[mid]==x){
            index = mid;
            break;
        }else if(arr[mid] < x){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    cout<<index<<endl;
    return 0;
}