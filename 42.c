#include <stdio.h>
int main() 
{
	char a[10],b[10];
	int i,sum=0,count=0;
	scanf("%s%s",a,b);
	for(i=1;a[i]!='\0'&&b[i]!='\0';i++)
	{
	if(a[i]==b[i])
	{
	sum++;
	}count++;
	}
	if(sum==count)
	{
		printf("equal");
	}
	else
	{
		printf("not equal");
	}
	if(a[i]>b[i])
	{
		printf("%s",a);;
		
	}
	else
	{
		printf("\n%s",b);
	}
	return 0;
}

