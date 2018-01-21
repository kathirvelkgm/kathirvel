#include <stdio.h>

int main()
{
int a,b,i,t,n,r;
scanf("%d%d",&a,&b);
for(i=a+1;i<b;i++)
{
	t=i;
	n=0;
	while(t!=0)
	{
		r=te%10;
		n=n+r*r*r;
		t=t/10;
	}
	if(i==n)
	{
		printf("%d",i);
	}
}
	return 0;
}
