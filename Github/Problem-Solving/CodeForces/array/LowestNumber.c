// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E?fbclid=IwAR1dtVe30nIfzTLjV-sixDFD824uv7FWl1zoiozl-Ei4NEqmnU4Dfl0HQZg

//Accepted??

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int min = arr[0], minIndex=0;
    for(int i=1; i<n; i++){
        if(min > arr[i]){
            min = arr[i];
            minIndex = i;
        }
    }
    printf("%d %d\n",min,minIndex+1);
    return 0;
}