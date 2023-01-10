#include"stdio.h"
int strlength(char *);
void xstrcpy(char *, char *);
char *xstrcat(char *, char *);
int main()
{
    char data[30];
    char copyData[60];
    printf("Enter string 1=\n");
    scanf("%[^\n]",data);
    fflush(stdin);
    printf("Enter string 2=\n");
    scanf("%[^\n]",copyData);
   // xstrcpy(copyData,data);
    printf("%s",xstrcat(copyData,data));
   // printf("%s",copyData);
//    int len=strlength(data);   
//    printf("Length of string =%d",len);
    
    return 0;
}
char * xstrcat(char *destination,char *source){
    char *temp=destination;
    while(*destination!='\0'){
        destination++;
    }
    while(*source!='\0'){
        *destination=*source;
        destination++;
        source++;
    }
    *destination='\0';
    return temp;
}
void xstrcpy(char *destination, char *source){
    while(*source!='\0'){
        *destination=*source;
        source++;
        destination++;
    }
    *destination='\0';
}
int strlength(char *data){
    int len=0;
    while(*(data)!='\0'){
        data++;
        len++;
    }
    return len;
}

