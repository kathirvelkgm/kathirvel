#include<stdio.h>
int main()
{
int i,j,n,c[10],b,k;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&c[i]);
}
for(j=1;j<=n;j++)
{
for(k=j+1;k<=n;k++)
{
if(c[j]>=c[k])
{
b=c[j];
c[j]=c[k];
c[k]=b;
}
}
}
printf("%d",b);
return 0;
}
