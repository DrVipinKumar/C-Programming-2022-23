#include"stdio.h"
void counter();
int main(int argc, char const *argv[])
{
    counter();
    counter();
    counter();
    return 0;
}

void counter(){
    static int count;
    count++;
    printf("%d ",count);
}
