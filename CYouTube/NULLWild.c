#include"stdio.h"
#include"stdlib.h"
int main(int argc, char const *argv[])
{
    int *p=malloc(sizeof(int *));  //Wild Pointer
    if(p!=NULL){
        *p=10;
        printf("%d",*p); 
    }
    // *p=10;
    // int num=10;
    // p=&num;   //Not Wild Pointer
      
    return 0;
}
