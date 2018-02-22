#include<stdio.h>
int main(void)
{
	int i,a[i],j,m,n,p,temp=0,t=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
      for(i=0;i<m;i++)
{		
	for(p=i+1;p<m;p++)
	{
		if(a[i]>a[p])
		{
temp=a[i];
a[i]=a[p];
a[p]=temp;
}
}}
	printf("The large is %d",temp);
	printf("\nThe small is %d",a[j]);
return 0;
}
