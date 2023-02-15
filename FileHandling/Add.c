#include"stdio.h"
#include"stdlib.h"
int main(int argc, char const *argv[])
{
    int sum=0;
    for(int i=1;i<argc;i++){
        sum+=atoi(argv[i]);
    }
    printf("Sum of all numbers =%d",sum);
    return 0;
}