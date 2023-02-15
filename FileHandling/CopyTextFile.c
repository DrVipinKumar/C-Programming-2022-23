#include"stdio.h"
#include"stdlib.h"
int main(int argc, char const *argv[])
{
    FILE *fpr, *fpw;
    int ch;
    if(argc==3){
 fpr=fopen(argv[1],"rb");
    fpw=fopen(argv[2],"wb");
    while(!feof(fpr)){
        ch=fgetc(fpr);
        fputc(ch,fpw);
    }
    fclose(fpr);
    fclose(fpw);
    } else 
    {
        printf("Use file like: CopyTextFile <fileone> <filetwo>");
    }
   
    return 0;
}
