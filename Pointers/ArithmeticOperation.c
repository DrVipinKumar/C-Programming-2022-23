#include"stdio.h"
int main(int argc, char const *argv[])
{
    int num[5]={1,2,3,4,5};
    int *p;      //i=i+1   = 0+1  = 1
    int i=0;     // p=p+1, p = 0x1004 

    for(p=&num[4];i<5;p--,i++){
        printf("%d ",*p);
    }
     for(int j=0;j<5;j++){
        printf("%d ",*(num+j));
        //num=num+1;
    }
    return 0;
}
