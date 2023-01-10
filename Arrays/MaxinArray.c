#include"stdio.h"
int *findMax(int num[],int size);
int main()
{
    int num[10]={12,34,56,78,100,233,43,58,788,65};
    int *max=findMax(num,10);
    printf("Max =%d",*max);
    return 0;
}
int *findMax(int num[],int size){
    int i=0;
    int *max=&num[0];
    for(i=1;i<10;i++){
        if(*max<num[i]){
            *max=num[i];
        }
    }
    return max;
}
