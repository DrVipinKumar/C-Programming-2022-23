#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter number1");
    scanf("%d",&num1);
    printf("Enter number2");
    scanf("%d",&num2);
    // if(num1>num2){
    //     printf("Number 1 is greater");
    // }
    //  else{
    //     printf("Number 2 is greater");
    //  }
        (num1>num2)? printf("Number 1 is greater"):printf("Number 2 is greater");
    
    return 0;
}
