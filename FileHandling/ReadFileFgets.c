#include"stdio.h"
#include"stdlib.h"
int main(int argc, char const *argv[])
{
    FILE *fp;
    char data[100];
    fp=fopen("Add.c","r");
    while(!feof(fp)){
        fgets(data,100,fp);
        printf("%s",data);
    }
    fclose(fp);
    return 0;
}