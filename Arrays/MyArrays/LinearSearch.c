#include"stdio.h"
int linearSearch(int num[],int size, int sNum);
int main(int argc, char const *argv[])
{
    int N,index;
    int sNum;
    printf("Enter size of Array=");
    scanf("%d",&N);
    int num[N];
    printf("Enter %d elements in array=",N);
    for(int i=0;i<N;i++){
        scanf("%d",&num[i]);
    }
    printf("Enter number to search=");
    scanf("%d",&sNum);
    index=linearSearch(num,N,sNum);
    if(index==-1){
        printf("Value not found in Array");
    } else 
    {
        printf("Value found at index =%d",index+1);
    }
    return 0;
}
int linearSearch(int num[],int size, int sNum){
      for(int i=0;i<size;i++){
        if(sNum==num[i])
        {
            return i;
        }
    }
    return -1;
}