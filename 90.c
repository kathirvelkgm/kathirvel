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
	for(i=1;i<n;++i)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
		printf("\t%c",a[i]);
		}
	}
	return 0;
	
	
}
