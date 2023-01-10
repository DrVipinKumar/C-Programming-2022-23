#include"stdio.h"

int main(int argc, char const *argv[])
{
    int arow,brow,acol,bcol;
    printf("Enter number of ROWS and COLUMNS of Matrix A=");
    scanf("%d%d",&arow,&acol);
    int A[arow][acol];
    printf("Enter %d X %d matrix (A) values=\n",arow,acol);
    for(int i=0;i<arow;i++){
        for(int j=0;j<acol;j++){
            scanf("%d",&A[i][j]);
        }        
    }
    printf("Enter number of ROWS and COLUMNS of Matrix B=");
    scanf("%d%d",&brow,&bcol);
    int B[arow][acol];
    if (brow==arow && bcol==acol){
    printf("Enter %d X %d matrix (B) values=\n",arow,acol);
    for(int i=0;i<arow;i++){
        for(int j=0;j<acol;j++){
            scanf("%d",&B[i][j]);
        }        
    }
    } else {
        printf("ROWS and COLUMNS are not same, so addition not possible");
    }
    
    int C[arow][acol];
    for(int i=0;i<arow;i++){
        for(int j=0;j<acol;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }


    printf("Matix A=\n");
    printf("[\n");
    for(int i=0;i<arow;i++){
        printf("  ");
        for(int j=0;j<acol;j++){
            printf("%d ",A[i][j]);
        }        
        printf("\n");
    }
    printf("]\n");
     printf("Matix B=\n");
    printf("[\n");
    for(int i=0;i<brow;i++){
        printf("  ");
        for(int j=0;j<bcol;j++){
            printf("%d ",B[i][j]);
        }        
        printf("\n");
    }
    printf("]\n");
     printf("]\n");
     printf("Addition of Matix A and B=\n");
    printf("[\n");
    for(int i=0;i<brow;i++){
        printf("  ");
        for(int j=0;j<bcol;j++){
            printf("%d ",C[i][j]);
        }        
        printf("\n");
    }
    printf("]\n");
    
   
    return 0;
}
