#include"stdio.h"
#include"stdlib.h"
int main(int argc, char const *argv[])
{
    char info[]="This function use to insert data into binary format";
    char data[sizeof(info)];
    FILE *fp;
    fp=fopen("getw.txt","w+");
    fwrite(info,sizeof(info),1,fp);
    rewind(fp);
    fread(data,sizeof(info),1,fp);
    printf("%s",data);
    return 0;
}
