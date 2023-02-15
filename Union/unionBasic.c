#include"stdio.h"
//#pragma pack(1)
int main(int argc, char const *argv[])
{
    struct sdata {
        char value;
        int num;
    }s1;
    union udata {
        int num;
        char value;
    }u1;
    printf("%p\n",&s1.num);
    printf("%p\n",&s1.value);
    printf("%p\n",&u1.num);
    printf("%p\n",&u1.value);
    // printf("%d\n",sizeof(s1));
    // printf("%d\n",sizeof(u1));
    return 0;
}
