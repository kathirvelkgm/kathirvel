#include<stdio.h>
int main()
	{
		int n,a,i,temp,sum=1;
		scanf("%d",&n);
		while(n!=0)
		{
			temp=n%10;
			n=n/10;
			sum=sum*temp;
		}
		printf("%d",sum);
		return 0;
	}
