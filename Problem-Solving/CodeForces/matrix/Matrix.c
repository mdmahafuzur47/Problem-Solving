#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int ara[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }
    int prsum=0;
    int scsum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if (i==j){
            prsum+=ara[i][j];
           }
           if((i+j)==(n-1)){
            scsum+=ara[i][j];
           }

        }
    }
    printf("%d\n",prsum);
    printf("%d\n",scsum);
    return 0;
}