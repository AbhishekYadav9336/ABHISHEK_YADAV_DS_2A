#include<stdio.h>
void main()
{
   int i,a[100],n,j;
   printf("enter the no. of elementof array");
   scanf("%d",&n);
   printf("enter the element of array");
   for(i=1;i<=n;i++)
   {
    scanf("%d",&a[i]);
   } 
   for(j=1;j<=n;j++)
   {
    printf("%d",a[j]);
   }
}