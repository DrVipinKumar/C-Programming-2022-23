#include"stdio.h"
int sumof1to10(int num);
int main()
{
    int num=10;
    printf("Sum=%d",sumof1to10(num));
    return 0;
}
int sumof1to10(int num){
   
    if (num==1)
    {
        return 1;
    } else 
    {
     return num+sumof1to10(num-1);
    }
}