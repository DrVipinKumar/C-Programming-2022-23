#include"stdio.h"
void msg(int m);
void printmsg(char *msg);
int main(int argc, char const *argv[])
{ 
    void (*pmsg)()=&msg;
    (*pmsg)(1);
    void (*pmsg1)()=msg;
    pmsg1(2);
    void (*farray[2])()={msg,printmsg};
     farray[0](3);
     farray[1]("This is function array");
    return 0;
}
void msg(int m){
    printf("\nThis is function pointer =%d",m);
}
void printmsg(char *msg){
    printf("\n%s",msg);
}