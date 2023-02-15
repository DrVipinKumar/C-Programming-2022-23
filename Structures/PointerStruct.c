#include"stdio.h"
typedef struct point{
        int x, y;
}P;
P *displayPointStruct(P *p1);
int main(int argc, char const *argv[])
{
    P s1={10,20};
   // P *ps1=&s1;
    // printf("\n%d",(*ps1).x);//(*ps1).x ==== ps1->x
    // printf("\n%d",ps1->y);   
    P *ps1=displayPointStruct(&s1);
    printf("\n%d",ps1->x); 
    printf("\n%d",ps1->y); 
    return 0;
}
P * displayPointStruct(P *p1)
{
    p1->x=40;
    p1->y=50;
    // printf("\n%d",p1->x); 
    // printf("\n%d",p1->y); 
    return p1;
}