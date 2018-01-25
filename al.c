#include<stdio.h>
int main()
{
int c,a[50],count=0,i,k=0,j;
scanf("%d",&n);
for(i=0;i<c;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<c;i++)
{
for(j=i+1;j<=c;j++)
{
if(a[i]>a[j])
{
k=a[i];
a[i]=a[j];
a[j]=k;


}
}
}
for(i=0;i<c;i++)
{
if(a[i]!='/0')
{
	count++;
}
}
k=count/2;
printf("%d",a[k]);

return 0;
}
