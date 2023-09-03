#include<stdio.h>
void swap(int *p, int *q) {
    
}
int main(){
    int a=10,b=20;
    int *p = &a;
    printf("%d\n",p);
    printf("%d\n",&a);
    swap(&a,&b);
    return 0;
}