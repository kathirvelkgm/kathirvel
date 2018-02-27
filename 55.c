#include<stdio.h>
int main()
{
int a,b,c,d;
scanf("%d%d",&a,&b);
c=a*b;
d=c%2;
if(d==0)
{
	printf("even");
	
}
else
{
	printf("odd");
}
return 0;
}
