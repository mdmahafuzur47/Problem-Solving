#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    scanf("%s", name);
    int len = strlen(name);
    int frq[26] = {0};
    for(int i=0; i<len; i++){
        // int ch = name[i] - 'a';
        frq[name[i]-'a'] ++;
    }
    for(int i=0; i<26; i++){
        // printf("%c : %d \n",i+'a',frq[i]);
        if(frq[i]!=0){
            printf("%c : %d \n",i+'a',frq[i]);
        }
    }
    return 0;
}