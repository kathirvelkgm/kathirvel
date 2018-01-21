#include <stdio.h>

int main(void) {
	int n,c,r,s=0,m;
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		r=n%10;
		c=r*r*r;
		s=s+c;
		n=n/10;
	}
	if(s==m)
	printf("Armstrong number");
	else 
	printf("no");
	return 0;
}
