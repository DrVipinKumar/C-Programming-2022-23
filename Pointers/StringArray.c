#include"stdio.h"
int main(int argc, char const *argv[])
{
     char nameC[5]={'K','i','e','t','\0'};  //Char Array
     char nameS[5]={"KIET"};  //String Array
     char *namePS;
     for(namePS=nameS;*namePS!='\0';namePS++){
        printf("%c",*(namePS));
     }
     printf("\n");
     for(int i=0;nameC[i]!='\0';i++){
        printf("%c",nameC[i]);
     }
    // printf("%s\n",nameC);
    // printf("%s",nameS);
    return 0;
}

