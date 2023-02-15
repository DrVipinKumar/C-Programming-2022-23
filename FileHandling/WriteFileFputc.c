#include"stdio.h"
#include"stdlib.h"
int main(int argc, char const *argv[])
{
    FILE *fp,*fpr;
    char data[]={"this is writing data into c file using fputc\n"};
    int ch;
    fp=fopen("Fputcfile.txt","w+");
    int i=0;
    while(data[i]!='\0'){
        fputc(data[i],fp);    
        i++;   
    }
    rewind(fp);
    //fpr=fopen("Fputcfile.txt","r");
    if(fp==NULL){
        printf("File not created");
    } else {
         printf("File created");
         while(!feof(fp)){
            ch=fgetc(fp);
            printf("%c",ch);
         }
    }
    fclose(fp);
    return 0;
}