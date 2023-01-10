#include"stdio.h"
int main(int argc, char const *argv[])
{
    int arow,acol,brow,bcol;
    printf("Enter ROWS and COLUMNS for Matrix A\n");
    scanf("%d%d",&arow,&acol);
    int A[arow][acol];
    printf("Enter %d X %d elements in Matrix A\n",arow,acol);
    for(int i=0;i<arow;i++){
        for(int j=0;j<acol;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter ROWS and COLUMNS for Matrix B\n");
    scanf("%d%d",&brow,&bcol);
    int B[brow][bcol];
    if(acol!=brow){
        printf("ROWS and COLUMNS are mismatch, multiplication is not possible");
    } else {
    printf("Enter %d X %d elements in Matrix B\n",brow,bcol);
    for(int i=0;i<brow;i++){
        for(int j=0;j<bcol;j++){
            scanf("%d",&B[i][j]);
        }
    }
    }
    int C[arow][bcol];
    int sum=0;
    for(int i=0;i<arow;i++){
        for(int j=0;j<bcol;j++){
            for(int k=0;k<bcol;k++)
            {
             sum=sum+A[i][k]*B[k][j];
            }
            C[i][j]=sum;
            sum=0;
        }
    }

    printf("Multiplication of Matrix C (%d X %d) is =\n",arow,bcol);
    printf("[\n");
    for(int i=0;i<arow;i++){
        for(int j=0;j<bcol;j++){
            printf(" %d",C[i][j]);
        }
        printf("\n");
    }
    printf("]");

    
    return 0;
}
