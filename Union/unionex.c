#include"stdio.h"
int main(int argc, char const *argv[])
{
    union data {
        double f;
        int a;
        char c;
        
    };
    union data u1;
    union data u2[10];
    union data *p=&u1;
    //u1.a=90;
    u1.c='Z';
    printf("%d\n",sizeof(u1));
    printf("%d\n",u1.a);
    printf("%c\n",u1.c);
    return 0;
}
