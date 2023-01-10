#include"stdio.h"
void swap(int *, int *);
int main(int argc, char const *argv[])
{
    int a=20;
    int b=30;
    printf("Before Swap:A=%d, B=%d\n",a,b);
    swap(&a,&b);
    printf("After Swap:A=%d, B=%d",a,b);    
    return 0;
}

void swap(int *a, int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}