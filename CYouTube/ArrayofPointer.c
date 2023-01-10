#include"stdio.h"
int main(int argc, char const *argv[])
{
    int num[4]={1,2,3,4};
    int data[2][2]={11,22,33,44};
    int *ptr1[4] ={&num[0],&num[1],&num[2],&num[3]};    //Array of Pointer
    int (*ptr2)[4] =&num;   //Pointer to Array
    int (*ptr3)[2]=data;
    printf("Value of Array of Pointer\n");   
    for(int i=0;i<4;i++){
        printf("%d ",*ptr1[i]);
    }
     printf("\nValue of Pointer to Array\n");
     for(int i=0;i<4;i++){
        printf("%d ",*(*ptr2+i));
    }
     printf("\nValue of Pointer to Array of 2D\n");
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
        printf("%d ",ptr3[i][j]);
    }
    return 0;
}
