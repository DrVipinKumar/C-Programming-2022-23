#include"stdio.h"
#include"string.h"
int main(int argc, char const *argv[])
{
    char name1[20]="Hello ";
    char name2[10]="World!";
    char name3[10];
    char data[25]="This is my data on";
    printf("Concatination of string is=%s\n",strcat(name1,name2));    
    printf("Concatination of string is=%s\n",name1);
    printf("Copy string is=%s\n",strcpy(name3,name2));
    printf("Copy string is=%s\n",name3);
    printf("Strcmp of string is=%d\n",strcmp(name2,name1));
    printf("Strtok of string is=%s\n",strtok(data,"n"));

    
    // printf("Enter string=\n");
    // scanf("%s",&name);
    // printf("Length of string is=%d\n",strlen(name));
    // printf("Reverse of string is=%s\n",strrev(name));
    return 0;
}

/*
Header File: string.h
1. strcat();
2. strlen();
3. strrev();
4. strcpy();
5. strstr();
6. strcmp();
7. strtok();
*/