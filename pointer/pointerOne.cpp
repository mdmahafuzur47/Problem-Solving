#include <bits/stdc++.h>
using namespace std;

void big(int *a,int *b){

    if(*a>*b){
        *b = *b + *a;
    }else{
        *a = *a + *b;
    }
}

int main()
{
    int a=3,b=5;
    cout<<a<<" "<<b<<endl;
    big(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}