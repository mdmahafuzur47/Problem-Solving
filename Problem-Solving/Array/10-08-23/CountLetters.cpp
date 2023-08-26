#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char word[100];
    cin>>word;
    int len = strlen(word);
    int frq[26] = {0};
    for(int i=0; i<len; i++){
        frq[word[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(frq[i] != 0){
        cout<<char(i+'a')<<" : "<<frq[i]<<endl;
        }
    }

    return 0;
}