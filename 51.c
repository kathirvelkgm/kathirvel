#include<stdio.h>
int main()
	{
		int n,a,c,b,d;
		scanf("%d",&n);
		a=n%10;
		b=n/10;
		d=b%10;
		c=b/10;
		printf("%d\t%d\t%d",c,d,a);
		return 0;
		
	}
