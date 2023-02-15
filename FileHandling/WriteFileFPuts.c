#include"stdio.h"
#include"stdlib.h"
int main(int argc, char const *argv[])
{
    FILE *fp;
    char info[]={"this is writing data into c file using fputc\n"};
    char data[100];
    fp=fopen("FPutsFile.txt","w+");
    fputs(info,fp);
    rewind(fp);
    while(!feof(fp)){
        fgets(data,100,fp);
        printf("%s",data);
    }
    fclose(fp);
    return 0;
}