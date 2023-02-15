#include"stdio.h"
#include"stdlib.h"
int main(int argc, char const *argv[])
{
    //int num[5][5];
    int m=3;
    int n=2;
    int *p=(int *)malloc((m*n)*sizeof(int));
    printf("Enter %d element in array",n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           scanf("%d",(p+i*n+j));           
        }       
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf ("%d ",*(p+i*n+j));
        }    
        printf("\n")  ; 
    }
    // for(int i=0;i<5;i++){
    //     printf("%d,",*(p+i));
    // }
    // int b;
    // int *p1=&b;
    // int *p=(int *)malloc(sizeof(int));
    // printf("Enter number=\n");
    // scanf("%d",p);
    // printf("%d\n",*p);
    return 0;
}
