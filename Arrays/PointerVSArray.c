#include"stdio.h"
int main()
{
    int num[5]={12,34,45,67,34};
   // int *p=&num[0];
    int *p=num;
   // p[3]=100;
     *(p+3)=100;
    for(int i=0;i<5;i++){
        printf("%d ",*(num+i));
    }
    return 0;
}
