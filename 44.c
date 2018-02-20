#include<stdio.h>
int main()
{
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	if(n>=a&&n<=b)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
