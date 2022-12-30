#include"stdio.h"
int main()
{
    int A[3][3]={ 
                     {2,4,6},
                     {12,45,56},
                     {2,4,5}
                  };
    int B[3][3]={ 
                     {2,0,6},
                     {12,3,5},
                     {2,24,5}
                  };
    int sum[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("[\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d",sum[i][j]);
        }
        printf("\n");
    }
    printf("]");
    return 0;
}
