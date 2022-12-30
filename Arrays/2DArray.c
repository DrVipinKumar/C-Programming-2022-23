#include"stdio.h"
int main()
{
    int num[2][3];
    printf("Enter 2 X 3 elements=\n");    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&num[i][j]);
        }
    }
printf("Elements of 2D Array 2 X 3 are=\n");
printf("[\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
    printf("]");

    // int num[2][2]={1,2,3,4};
    // int num1[2][2]={
    //                  {1,2},
    //                  {3,4}
    //                 };
    return 0;
}
