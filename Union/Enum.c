#include"stdio.h"
int main(int argc, char const *argv[])
{
    enum bool 
    {
        False,
        True,
    };
    enum weekdays{
        Sunday,
        Monday,
        Tuesday,
        Wednesday='A',
        Thursday,
        Friday,
        Saturday,
        
    };
    enum bool var;
    // var=True;
    // printf("%d",var);
    enum weekdays day;
    day=Friday;
    printf("%d",day);
    return 0;
}
