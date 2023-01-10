#include"stdio.h"
int findMax2(int num[],int size);
int main(int argc, char const *argv[])
{
    int N,max2;
    printf("Enter size of array=");
    scanf("%d",&N);
    int num[N];
    printf("Enter %d elments in array=",N);
    for(int i=0;i<N;i++){
        scanf("%d",&num[i]);
    }
     max2=findMax2(num,N);
     printf("Second Largest Number is=%d",max2);
    return 0;
}
int findMax2(int num[], int size)
     {
    int max2;
    int max=num[0];
    for(int i=1;i<size;i++){
        if (num[i]>max){
            max2=max;
            max=num[i];
        } else if (num[i]>max2 && num[i]<max){
              max2=num[i];
        }
    }
    return max2;
}
