#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],r1,r2,c1,c2,i,k,j;
    printf("enter the no of rows and columns of matrix 1:");
    scanf("%d %d",&r1,&c1);
    printf("enter the no of rows and columns of matrix 2:");
    scanf("%d %d",&r2,&c2);
    if(r1==c2){
        printf("enter the elements of matrix 1:");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
        }
        printf("\ndisplaying maTRIX 1\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++)
            printf("%d\t",a[i][j]);
            printf("\n");
        }
         printf("enter the elements of matrix 2:");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);
        }
        printf("\ndisplaying maTRIX 2\n");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++)
            printf("%d\t",b[i][j]);
            printf("\n");
        }
        printf("\nproduct of matrices");
        for(i=0;i<r1;i++)
            for(j=0;j<c2;j++)                                       //**i<r1 j<c2   k=0;k<r2;k++  c[i][j]+=a[i][k]*bkj
            {
                c[i][j]=0;
                for(k=0;k<r2;k++)
                c[i][j]+=a[i][k]*b[k][j];
            }
        
        printf("\nmultiplication of matrix\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++)
            printf("%d\t",c[i][j]);
            printf("\n");
        }
    }
    else
    printf("\nmultiplication not possible");
    return 0;
}