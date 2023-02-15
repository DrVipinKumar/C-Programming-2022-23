#include"stdio.h"
#include"stdlib.h"
int main(int argc, char const *argv[])
{
    //malloc memory allocation
    int *mp=(int *)malloc(sizeof(int));
    *mp=2;
    printf("%d",*mp);
    free(mp);
    //calloc memory allocation
    int *cp=(int *)calloc(1,sizeof(int));
    *cp=2;
    printf("%d",*cp);
    free(cp);
    return 0;
}
