#include <stdio.h>
int main() 
{
int a[20],i,n,t=2;
scanf("%d",&n);
printf("%d\n",n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
	if((a[i]==1)||(a[i]==0))
	{
	t++;
	}
}
printf("%d\n",t);
if(t==n)
{
	printf("yes");
}
	return 0;
}

