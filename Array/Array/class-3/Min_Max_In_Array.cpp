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
    //minimum in array

    int min = arr[0],minIndex = 0;
    for(int i=1; i<size; i++){
        if(min>arr[i]){
            min = arr[i];
            minIndex = i;
        }
    }
    cout<<"Minimum Value and Index: "<<min<<" "<<minIndex<<endl;

    //maximum in array

    int max= arr[0],maxIndex = 0;
    for(int i=1; i<size; i++){
        if(max<arr[i]){
            max = arr[i];
            maxIndex = i;
        }
    }
    cout<<"Maximum Value and Index: "<< max<<" "<<maxIndex<<endl;
    return 0;
}