#include<stdio.h>
int main()
{
	int a[10],i,j,v;
for(i=0;i<10;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
	v=a[i];
	a[i]=a[j];
	a[j]=v;
}
}
}
printf("%d",a[9]);
return 0;
}
