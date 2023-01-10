#include"stdio.h"
void swap(int * , int *);
void arrayswap(int value[]);
int main(int argc, char const *argv[])
{
    int n1=10;
    int n2=20;
    int value[2]={40,70};
    printf("Value[0]=%d and Value[1]=%d\n",value[0],value[1]);
    arrayswap(value);
    printf("Value[0]=%d and Value[1]=%d\n",value[0],value[1]);
//     printf("N1=%d and N2=%d\n",n1,n2);
//    // swap(n1,n2); //callbyvalue
//      swap(&n1, &n2);  //callbypointer
//     printf("N1=%d and N2=%d\n",n1,n2);
    return 0;
}
void arrayswap(int value[]){  //call by reference
   int temp;
   temp=value[0];
   value[0]=value[1];
   value[1]=temp;
}
void swap(int *n1, int *n2){  //call by pointer
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
//    printf("N1=%d and N2=%d\n",n1,n2);
}
