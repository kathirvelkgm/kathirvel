#include <stdio.h>
void main ()
   {
int ar[10][10];
int i,j,m,n,a=0,sum=0,v;
scanf("%d %d", &m, &n);
if(m==n)
        {
        for(i=0;i<m;i++)
        {
        for(j = 0; j < n; ++j)
        {
         scanf("%d", &ar[i][j]);
        }
        }
        printf("The given matrix is \n");
        for(i=0;i<m;i++) 
        {
        for(j=0;j<n;j++)
        {
        printf("\t%d", ar[i][j]);
        }
        printf("\n");
        }
        for(i=0;i<m;i++) 
        {
            sum =sum+ar[i][i];
            a=a+ar[i][m-i-1];
        }
        printf("\nThe sum of the main diagonal elements is=%d\n", sum);
        printf("The sum of the off diagonal elements is= %d\n", a);
        }
        v=sum*a;
       printf(" The product of sum of diagonal is %d",v);
       return 0;
       }
