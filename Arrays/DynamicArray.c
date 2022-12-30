#include"stdio.h"
int main()
{
    int N;   
    printf("Enter size of array");
    scanf("%d",&N);
     int num[N];
    for(int i=0;i<10;i++){
        num[i]=i;
    }
     for(int i=0;i<10;i++){
       printf("%d",num[i]);
    }
    return 0;
}
