// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I

#include <bits/stdc++.h>
using namespace std;

int vowels(char str[],int i){
    if(str[i] == '\0') return 0;
    int value = vowels(str,++i);
    if(str[i]<='A' && str[i]<='Z') str[i] +=32;
    if(str[i]  == 'a' || str[i] =='e' ||str[i]=='i'||str[i] == 'o'||str[i]== 'u'){
        return ++value;
    }else{
        return value;
    }
}
int main()
{
    char str[205];
    cin.getline(str,205);
    int ans = vowels(str,0);
    cout<<ans<<endl;
    return 0;
}