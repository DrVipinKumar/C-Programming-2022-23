#include"stdio.h"
int main()
{
    char name1[5]={"Vipin"};//String array
    char name[5]={'V','i','p','i','n'};  //character array;
    //char name[5];//declaration of string array;
    int i=0;
    while(name[i]!='\0'){
        printf("%c",name[i]);
        i++;
    }
    // printf("%s\n",name);
    // printf("%s",name1);
    return 0;
}
