#include<stdio.h>
int main()
{
	int n,a,b,c,d,v;
	scanf("%d",&n);
           {
           a=n%10;
           b=n/10;
           c=b%10;
           d=b/10;
           v=a+c+d;
    printf("%d",v);
           }
          return 0;
}
