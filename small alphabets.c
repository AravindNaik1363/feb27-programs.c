#include<stdio.h>
int main()
{
   int n,r,c;
   printf("Enter number of rows: ");
   scanf("%d",&n);
   for(r=1; r<=n; r++)
   {
     for(c=1; c<=n; c++)
     {
       printf("%c ",c+96);//range of (a-z)=97-122
     }
     printf("\n");
   }
   return 0;
}
