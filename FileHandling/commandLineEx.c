#include"stdio.h"
#include"string.h"
int main(int argc, char const *argv[])
{
    printf("Number of arguments=%d\n",argc);
    for(int i=0;i<argc;i++){
       printf("%s ",argv[i]);
    }

    return 0;
}
