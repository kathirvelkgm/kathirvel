#include<stdio.h>
int main()
{
int i,a[10],n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
if(i!=a[i])
{
printf("change number is %d",i);
}
}
return 0;
}
