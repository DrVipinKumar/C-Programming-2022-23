#include"stdio.h"
int main()
{
    unsigned char num=7;
    char r= num&4;
    unsigned rr;
    printf("\nAND %d",r);
        r= num|4;
       
    printf("\nOR %d",-~num);
     r= num ^ 4;
    printf("\nXOR %d",r);
    printf("\nLeft Shift %d",num<<3);
    printf("\nRight Shift %d",num>>2);

    // if (7&0)
    //     printf("AND bitwise ok");
    
    // if (7 && 2 )
    //     printf("Logical Operator");
    return 0;
}
