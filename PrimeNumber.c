#include"stdio.h"
#include"math.h"
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter number to check prime\n");
    scanf("%d",&num);
    int count=0;
    int sqrtnum=ceil(sqrt(num));
    for(int i=2;i<=sqrtnum;i++){
        if(num%i==0){
            count=1;
            break;
        }
    }
    if(count==0 & num!=1 || num==2){
        printf("Prime number");
    } else {
        printf("Not prime number");
    }
    return 0;
}
