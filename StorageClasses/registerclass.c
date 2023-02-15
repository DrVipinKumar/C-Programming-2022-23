#include"stdio.h"
void display();
int main(int argc, char const *argv[])
{
    register int a=10;
    printf("%d ",a);
     display();   
    
    return 0;
}
void display(){
    register int b=40;
    printf("%d ",b);
}
