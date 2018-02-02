#include<stdio.h>
int main()
{
	int a[20],i,j,v;
for(i=0;i<20;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<20;i++)
{
for(j=i+1;j<20;j++)
{
if(a[i]>a[j])
{
	v=a[i];
	a[i]=a[j];
	a[j]=v;
}
}
}
printf("%d",a[19]);
return 0;
}
