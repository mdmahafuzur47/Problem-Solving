#include <bits/stdc++.h>
using namespace std;
void sawp(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"a ="<<a<<" "<<"b ="<<b<<endl;    
}
int main()
{
    int a=10,b=20;
    sawp(a,b);
    cout<<"a ="<<a<<" "<<"b ="<<b<<endl;  
    return 0;
}