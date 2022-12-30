#include "stdio.h"
void main()
{
    double num1;
    double num2; 
    // printf("\n %d", printf(" the Sum of num1=%d and num2=%d is=",num1,num2));
    // int count=printf(" %d",sum);
    // printf("%p\n",&num1);
    // printf("%p",&num2);
    printf("Enter number1=");
    scanf("%lf",&num1);
    printf("Enter number2=");
    int count=scanf("%lf",&num2);
    printf("Sum =%lf",(num1+num2));
    printf("\n%d",count);

}
