#include"stdio.h"
void sum(int num1, int num2);
int sub(int num1, int num2);
void mul();
int div();
int main()
{
    int num1, num2;
    printf("Enter num1=");
    scanf("%d",&num1);    
    printf("Enter num2=");
    scanf("%d",&num2);
    sum(num1,num2);
    int r=sub(num1,num2);
    printf("\nSubtraction=%d",r);
    mul();
    printf("\nDivision=%d",div());
    return 0;
}
void sum(int num1, int num2){
    int s=num1+num2;
    printf("\nSum=%d",s);
}
int sub(int num1, int num2){
    int s=num1-num2;
    return s;
}
void mul(){
  int num1, num2;
   printf("Enter num1=");
    scanf("%d",&num1);    
    printf("Enter num2=");
    scanf("%d",&num2);
    printf("\nMultiply=%d",(num1*num2));
}
int div(){
  int num1, num2;
   printf("Enter num1=");
    scanf("%d",&num1);    
    printf("Enter num2=");
    scanf("%d",&num2);
    return (num1/num2);
}
