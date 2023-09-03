// method = using frquency method 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char name[100];
    cin>>name;
    int len = strlen(name);
    int frq[26] = {0};
    for(int i=0; i<len; i++){
       frq[name[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(frq[i]>=1){
            cout<<char(i+'a')<<"="<<frq[i]<<endl;
        }
    }

    return 0;
}