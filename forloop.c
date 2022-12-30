#include"stdio.h"
int main()
{
    int i=0,j=0;
    while(i<9){           
        if(i>=6 && i<=7)
        {
        i=i+1; 
        continue;       
        } else {
            printf("\nvalue of i =%d",i); 
            i=i+1; 
        }
           
    }
    // while(j>0){
    //    printf("value of j is  %d\n",j);
    //    j--;
    // }
    // do{
    //      printf("value of i is  %d\n",i);
    //      i--;
    // }while(i>0);
    // for(printf("this is line %d\n",i);i<=4; printf("this is line %d\n",i))
    // {
    
    // ++i;
    // }
    return 0;
}
