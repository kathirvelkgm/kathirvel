#include <stdio.h>
int main()
{
	int l=1,i,a,b;
	scanf("%d%d",&a,&b);
	for(i=1;i<=(a>b?a:b);i++)
	if (a%i==0||b%i==0)
	l=i;
	printf("%d",l);
 return 0;
}
