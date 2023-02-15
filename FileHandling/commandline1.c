#include"stdio.h"
#include"stdlib.h"
int main(int argc, char const *argv[])
{
    FILE *fp, *fwp;
    int ch;
    char data[100];
    fp=fopen("commandline.c","r");
    fwp=fopen("commandline1.c","w+");
    while(!feof(fp))
    {
        fgets(data,100,fp);
        if(feof(fp)||(fp==NULL))
        break;
       // printf("%c",ch);
       fputs(data,fwp);
    }
     rewind(fwp);
     while(1){
        ch=fgetc(fwp);
         if(feof(fwp)||(fwp==NULL))
        break;
       printf("%c",ch);
    }
    fclose(fp);
    fclose(fwp);
    return 0;
}
