#include"stdio.h"
void display(int *,int size);
int main(int argc, char const *argv[])
{
    int num[3]={1,2,3};
    display(num,3);
    return 0;
}

void display(int *num, int size){
   *(num+1)=20; 
   for(int i=0;i<size;i++){
    printf("%d ",*(num+i));
   }
}


