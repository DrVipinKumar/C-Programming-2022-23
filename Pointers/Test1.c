#include"stdio.h"
int test1(int *,int *);
int main(int argc, char const *argv[])
{
    int i=2,j=0;
    int *p=&i;
    int *q=&j;
    test1(p,q);
    printf("j=%d",j);
    return 0;
}
int test1(int *p, int *q){
    p=q;
    *p=10;
}
