// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A?fbclid=IwAR1ikSaPBhsuOwAUmlFu5IXCSFQCqKKnfcnJJ8JvVSu-CHBhOnD0aRNzs1g

// Accepted??

#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    long long int arr[n],sum=0;
    for(int i=0; i<n; i++){
        scanf("%lld", &arr[i]);
        sum+=arr[i];
    }
    if(sum<0){
        printf("%lld\n",sum*-1);
    }else{
        printf("%lld\n",sum);
    }
}