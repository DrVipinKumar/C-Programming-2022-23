#include"stdio.h"
int main(int argc, char const *argv[])
{
    char name='K';
    char *pname=&name;
    int num=10;
    int *pnum=&num;
    *pnum=20;
    int num2=30;
    pnum=&num2;
    printf("Value of num=%d\n",num);
    printf("Address of num=%p\n",&num);
    printf("Value of Pointer pnum=%p\n",pnum);
    printf("Address of Pointer pnum=%p\n",&pnum);   
   
    printf("Value at the location of Address assigned to pnum=%d\n",*(pnum));
    return 0;
}
