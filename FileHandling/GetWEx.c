#include"stdio.h"
#include"stdlib.h"
int main(int argc, char const *argv[])
{
    int num=10;
    FILE *fp;
    fp=fopen("getw.txt","w+");
    putw(num,fp);
    rewind(fp);
    int data=getw(fp);
    printf("%d",data);
    return 0;
}
