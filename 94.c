#include<stdio.h>
int main() 
{
	int n,a[4],b,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	}
	scanf("%d",&b);
	printf("%d",a[b]);
	return 0;
}
