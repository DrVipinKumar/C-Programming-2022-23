#include"stdio.h"
#include"stdlib.h"
int main(int argc, char const *argv[])
{
    int *p=(int *)malloc(5*sizeof(int));
    printf("Enter 5 elements\n");
    for(int i=0;i<5;i++){
        *(p+i)=i+1;
    }
    printf("Value is Array of 5 elements=");
    for(int i=0;i<5;i++){
       printf("%d, ",*(p+i));
    }
     int *pp=(int *)realloc(p,sizeof(int)*10);
     printf("Enter 10 elements\n");
    for(int i=5;i<10;i++){
        *(pp+i)=i+1;
    }
    printf("Value is Array of 10 elements=");
    for(int i=0;i<10;i++){
       printf("%d, ",*(pp+i));
    }

    return 0;
}
