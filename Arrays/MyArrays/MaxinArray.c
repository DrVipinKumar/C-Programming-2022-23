#include"stdio.h"
int findMax(int num[],int size);
int main(int argc, char const *argv[])
{
    int N,max;
    printf("Enter size of array=");
    scanf("%d",&N);
    int num[N];
    printf("Enter %d elements in array=",N);
    for(int i=0;i<N;i++){
        scanf("%d",&num[i]);
    }
    max=findMax(num,N);
    printf("%d = is the maximum value in array",max);
    return 0;
}
int findMax(int num[],int size){
     int max=num[0];
     for(int i=1;i<size;i++){
          if(max<num[i]){
            max=num[i];            
          }
     }
    //  if (i>=size){
    //    return -1;
    //  } else {
    //     return max;
    //  }
    return max;
}