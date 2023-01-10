#include"stdio.h"
int main(int argc, char const *argv[])
{
    char *p=(char *)0x12340001;
    printf("%Fp\n",p);
    printf("%fp",p+0x12234234);
    return 0;
}
