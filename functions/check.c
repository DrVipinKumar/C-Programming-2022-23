#include"stdio.h"
int isEven(int num);
int main()
{
    int num;
    printf("Enter number=");
    scanf("%d",&num);
    if(isEven(num)){
         printf("Even");
    }else {
        printf("Odd");
    }
    
    return 0;
}
int isEven(num){
    if(num%2==0){
        return 1;
    }else {
        return 0;
    }
}
