#include<stdio.h>
void main()
{
int a[11],n,m,i,sum=0;
scanf("%d%d",&n,&m);
for(i=1;i<=n;i++)
{
  printf("%d\t",a[i]);
}
for(i=1;i<=m;i++)
{
  sum=sum+a[i];
}
  printf("%d",sum);
}
