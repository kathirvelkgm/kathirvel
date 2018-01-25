#include<stdio.h>
int main()
{
int n,a[50],count=0,i,k=0,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
k=a[i];
a[i]=a[j];
a[j]=k;


}
}
}
for(i=0;i<n;i++)
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
