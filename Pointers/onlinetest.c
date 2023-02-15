// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int a[]={10,20,30,40,50,60,70,80,90};
  int *p,*q;
  p=a;
  q=&a[0]+3;
  printf("%d %d %d\n",(*p)++, (*p)++, *(++p));
  printf("%d\n",*p);
  printf("%d\n",(*p)++);
  printf("%d\n",(*p)++);
   q--;
   printf("%d\n",(*(q+2))--);
   printf("%d\n",*(p+2)-2);
   printf("%d\n",*(p++ -2)-1);
   

 return 0;
}