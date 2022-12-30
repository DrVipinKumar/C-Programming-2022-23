#include"stdio.h"
int search(int num[],int value,int size);
int main()
{
    int num[10]={12,34,23,56,32,65,43,12,45,100};
    int value=200;
    int index=search(num,value,10);
    if(index==-1){
        printf("Value not found");
    } else {
        printf("Value found at index=%d",index);
    }
    return 0;
}
int search(int num[],int value,int size){
    int i=0;
    for(i=0;i<size;i++){
        if (num[i]==value){
            return i;
            
        }
    }
    return -1;
}
