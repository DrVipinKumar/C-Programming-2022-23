#include"stdio.h"
void display();
int main(int argc, char const *argv[])
{
    auto int a=10;
    printf("%d ",a);
     {
        auto int a=20;
        printf("%d ",a);
     }
     display();
     printf("%d ",a);
    // 
    return 0;
}
void display(){
    auto int b=40;printf("%d ",b);
}
