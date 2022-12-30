#include"stdio.h"
int main()
{
   // int data[2][3]={10,20,30,40,50,60};
    int data[3][3]= {
                        {10,20},
                        {30,40},
                        {50,60}
                    };
    printf("Elements of 2D array are:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",*(*(data+i)+j));
            printf("%d ",data[i][j]);
            printf("\n");
        }
    }
    // int data[2][2];//2D array declaration
    // data[0][0]=10;
    // data[0][1]=20;
    // data[1][0]=30;
    // data[1][1]=40;
    return 0;
}
