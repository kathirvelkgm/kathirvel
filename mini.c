#include <stdio.h>
 
int main(void) {
	int i,a[i],j,m,n,l,temp=0,t=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
 	for(i=0;i<m;i++)
{
	for(l=i+1;l<m;l++)
	{
		if(a[i]<a[l])
		{
t=a[i];
a[i]=a[l];
a[l]=t;
}
}
}
printf("%d",t);
	return 0;
}
