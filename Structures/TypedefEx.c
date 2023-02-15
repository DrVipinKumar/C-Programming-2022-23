#include"stdio.h"
// typedef int number;
    // number num=10;
    // number num2=30;
 typedef struct point {
        int x;
        int y;
    } points;   
points displayStruct(points p1, points p2);
int main(int argc, char const *argv[])
{
   // points p4={4,5};
    points p[2];
    printf("Enter P1 x and y=\n");
    scanf("%d%d",&p[0].x,&p[0].y);
    printf("Enter P2 x and y=\n");
    scanf("%d%d",&p[1].x,&p[1].y);
    points p3=displayStruct(p[0],p[1]);
    printf("X=%d and Y=%d\n",p3.x,p3.y);
    return 0;    
}
points displayStruct(points p1, points p2){
    points p3;
    p3.x=p1.x+p2.x;
    p3.y=p1.y+p2.y;
    return p3;
}
