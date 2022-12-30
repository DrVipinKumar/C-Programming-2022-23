#include"stdio.h"
int isLeapYear(int year);
int main()
{
    int year;
    printf("Enter year\n");
    scanf("%d",&year);
    if(isLeapYear(year))
    {
        printf("is a leap year\n");
    }
    else{
        printf("not a leap year");
    }
    return 0;

}
int isLeapYear(int year)
{
   if(year%400==0 || (year%4==0 && year%100!=0))
     return 1;
     else 
       return 0;
}
