//code for transpose of two matrix in 2D
#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],i,j,k;
    printf("enter the elemen of matrix a\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
 for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)

       {
           b[i][j]=a[j][i];
        printf("%d\t",b[i][j]);
       }printf("\n");
   
   }
   
}