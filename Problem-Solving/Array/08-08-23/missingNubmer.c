// https://leetcode.com/problems/missing-number/
//sum of array where n=1,2,3,4,5.. n*(n+1)/2

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int firstsum = n*(n+1)/2;
    int missSum =0;
    for(int i=0; i<n; i++){
        missSum+=arr[i];
    }
    int result = firstsum - missSum;
    printf("%d\n",result);
    return 0;
}
