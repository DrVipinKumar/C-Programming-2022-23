#include"stdio.h"
#include"stdlib.h"
int * DanglingFunc();
int main(int argc, char const *argv[])
{
    int *p=(int *)malloc(sizeof(int));
    *p=10;
    printf("%d ",*p);
    printf("%p ",p);
    free(p);
    printf("%p ",p);   //Dangling Pointer
    printf("%d ",*p);
    int *p1=DanglingFunc();
    printf("%d",*p1);
    return 0;
}

int * DanglingFunc(){
    int num=10;
    return &num;
}
