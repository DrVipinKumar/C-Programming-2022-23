#include"stdio.h"
int main()
{
    char nameC[6]={'V','i','p','i','n','\0'};  //Character Array
    char nameS[6]={"Vipin"};    //String Array
    char *nameP="Vipin";  //String literal
    nameP[0]='S';
    printf("%s",nameP);
    // printf("%s\n",nameC);
    // printf("%s",nameS);
    // int i=0;
    // while(nameP[i]!='\0'){
    //     printf("%c",nameP[i]);
    //     i++;
    // }
   
    return 0;
}
