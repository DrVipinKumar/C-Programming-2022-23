#include"stdio.h"
int main()
{
    int num=1;
    int value=0;
    value= num++ + num;
            //1  +   3   +  3    -  5
    //value= num++ + num++ + ++num + ++num;   //pre-increment;
    //num=1+num;    num++ post-increment
    printf("Value=%d\n",value);
    printf("Num=%d",num);
    return 0;
}
