#include"stdio.h"
int main()
{
    int num[5];  //array declaration
    int data[10]={1,2,3,4,5};//array initialization
    printf("Elements of array are:\n");
    for(int i=0;i<10;i++){
        printf("%d ",*(data+i));
        printf("%d ",data[i]);
        printf("\n");
    }
    printf("%d",sizeof(data));
    // printf("Enter elements in array");
    // for (int i=0;i<5;i++){
    //     scanf("%d",&num[i]);
    // }
    // int data1[5];
    // data1[0]=10;
    // data1[1]=20;
    // data1[2]=30;
    // data1[3]=50;
    // data1[4]=60;

    return 0;
}
