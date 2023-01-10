#include"stdio.h"
int main(int argc, char const *argv[])
{
    // int num[3]={1,2,4};
    // int *p[5]={&num[0],&num[1],&num[2]};  //array of pointer
    // int (*p1)[3]=&num;   // pointer to array

    int num[2][2]={1,2,3,4};
    int (*dp)[2]=num;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }
    // int data=10;
    // int *ptr1=&data;
    // int **ptr2=&ptr1;
    // printf("Value of data=%d\n",data);
    // printf("Value of data=%d\n",*ptr1);
    // printf("Value of data=%d\n",**ptr2);
        return 0;
}
