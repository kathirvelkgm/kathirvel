#include<stdio.h>
int main()
{ 
	int a,b,n,i,c;
	scanf("%d%d%d",&n,&a,&b);
	for(i=0;i<=n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}

return 0;

}
