#include<stdio.h>
int main()
{
	int a,n,i=2;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		a=2*i;
		i++;
		if(a==n)
		{
		printf("yes");
	            }
	}
return 0;
}
