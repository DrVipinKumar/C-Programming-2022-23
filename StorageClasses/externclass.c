#include"stdio.h"
int main(int argc, char const *argv[])
{
    extern int a;
    extern int data;
    printf("%d\n",a);
    printf("%d",data);
    return 0;
}
int a=10;
