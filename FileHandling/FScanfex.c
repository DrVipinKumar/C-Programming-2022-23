#include"stdio.h"
#include"stdlib.h"
int main(int argc, char const *argv[])
{
    char name[]="KIET MCA";
    int roll=12;
    double salary=10000.12;
    char name1[sizeof(name)];
    int roll1;
    double salary1;
    FILE *fp;
    fp=fopen("getw.txt","a+");
    fprintf(fp,"%s,\t%d\t,%fl\n",name,roll,salary);
    rewind(fp);
    fscanf(fp,"%s,\t,%d\t,%fl",name1,roll1,salary1);
    printf("%s\t%d\t%fl",name1,roll1,salary1);
    return 0;
}
