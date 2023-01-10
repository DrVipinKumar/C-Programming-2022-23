#include"stdio.h"
#include"stdlib.h"
int main(int argc, char const *argv[])
{
    int num=10;
    void *p=&num;   //void pointer
    printf("%d",*((int *)p));
    char name[6]={"vipin"};
    p=name;
    printf("%s",p);
    return 0;
}
