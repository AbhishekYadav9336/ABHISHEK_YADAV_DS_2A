//code for multpication of two matrix in 2D
#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],c[100][100],i,j,k;
    printf("enter the elemen of matrix a\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elemen of matrix b\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    k=0;
 for(i=0;i<3;i++)
    {for(j=0;j<3;j++)

       {
        c[i][j]==0;
         for(k=0;k<3;k++)
        
        {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
           } 
             printf("%d\t",c[i][j]);
       }printf("\n");
   
   }
   
}