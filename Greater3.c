#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter num1");
    scanf("%d",&num1);
    printf("Enter num2");
    scanf("%d",&num2);
    printf("Enter num3");
    scanf("%d",&num3);
    (num1>num2 && num1>num3)?printf("Number 1 is greater"):
    (num2>num1 && num2>num3)?printf("Number 2 is greater"): 
                            printf("Number 3 is greater");
    // if((num1>num2) && (num1>num3)){
    //         printf("Number 1 is greater");
    // } else if (num2>num1 && num2>num3){
    //         printf("Number 2 is greater");
    // } else {
    //      printf("Number 3 is greater");
    // }
    printf("Complied By: MCA");
    return 0;
}
