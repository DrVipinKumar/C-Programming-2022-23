#include"stdio.h"
int main()
{
    int num=10;
    int *pnum;
    pnum=&num;
    printf("Value of num=%d\n",num);
    printf("Address of num=%p\n",&num);
    printf("Address of num by Pointer=%p\n",pnum);
      *pnum=20;
    printf("Address of num=%d\n",num);
    printf("Address of num=%d\n",*pnum);


    return 0;
}
