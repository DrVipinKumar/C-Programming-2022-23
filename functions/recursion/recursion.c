#include"stdio.h"
void displayNumber(int num);
int main()
{   int num;
    // printf("Enter number=");
    // scanf("%d",&num);
    displayNumber(10);
    return 0;
}
void displayNumber(int num){
    if (num==0)
    {
        return;
    } else {
        printf("%d ",num);
        displayNumber(num-1);
        
    }
}
