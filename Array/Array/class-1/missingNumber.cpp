// https://leetcode.com/problems/missing-number/
//sum of array where n=1,2,3,4,5.. n*(n+1)/2

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
    int presentSum = 0;
    int totalSum = size*(size+1)/2;
    for(int i=0; i<size; i++){
        presentSum += arr[i];
    }
    int result = totalSum - presentSum;
    cout<<result<<endl;
    return 0;
}