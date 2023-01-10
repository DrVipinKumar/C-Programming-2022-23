#include"stdio.h"
int main(int argc, char const *argv[])
{
    int arow,acol,brow,bcol;
    printf("Enter Row and Column for Marix A=\n");
    scanf("%d%d",&arow,&acol);
    int A[arow][acol];
    printf("Enter elements in matrix A (%d X %d)=\n",arow,acol);
    for(int i=0;i<arow;i++){
        for(int j=0;j<acol;j++){
            scanf("%d",&A[i][j]);
        }
    }
     printf("Enter Row and Column for Marix B=\n");
    scanf("%d%d",&brow,&bcol);
    int B[brow][bcol];
    printf("Enter elements in matrix B (%d X %d)=\n",brow,bcol);
    for(int i=0;i<brow;i++){
        for(int j=0;j<bcol;j++){
            scanf("%d",&B[i][j]);
        }
    }
    int C[arow][bcol];
    int sum=0;
    if(acol!=brow){
        printf("Invalid Row and Column");
    } else {
       for(int i=0;i<arow;i++)
       {
          for(int j=0;j<bcol;j++){
              for(int k=0;k<bcol;k++){
                    sum=sum+A[i][k]*B[k][j];
              }
              C[i][j]=sum;
              sum=0;
          }
       }
    }
    printf("Multiplicaiton of Matrix C (%d X %d)=\n",arow,bcol);
    printf("[\n");
    for(int i=0;i<arow;i++){
        for(int j=0;j<bcol;j++){
            printf(" %d",C[i][j]);
        }
        printf("\n");
    }
       printf("]\n");
    return 0;
}
