#include"stdio.h"

int main()
{
    char choice;
    printf("Enter your choice=");
    scanf("%c",&choice);
    switch(choice)
    {
        case 'a':  
                printf("Case 1\n");
                break;
        case '2':  
                printf("Case 2\n");
                break;
        case '3':  
                printf("Case 3\n");
                break;
        default: 
                printf("default any false choice");
    }
    return 0;
}
