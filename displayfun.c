#include"stdio.h"
void displayAge(int age);
void displayAge1();
int main()
{
    int age;
    printf("Enter age =");
    scanf("%d",&age);
    displayAge(age); 
    displayAge1();
    //printf("\n%d",age);
    return 0;
}
void displayAge(int age){
   //age=30;
   printf("\n%d",age);
  
}
void displayAge1(){
    int age;
    printf("Enter age 1=");
    scanf("%d",&age); 
   //age=30;
   printf("\n%d",age);
  
}
