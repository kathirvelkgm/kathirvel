#include <stdio.h>
int main()
{
	char a[10];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	for(i=n;i>=0;i--)
	{
		printf("\t%c",a[i]);
	}
	return 0;
	
	
}
