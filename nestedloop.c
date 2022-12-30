#include"stdio.h"
#include"conio.h"
int main(int argc, char const *argv[])
{
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("i=%d, j=%d\n",i,j);
            getch();
        }
    }
    return 0;
}
