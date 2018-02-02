#include<stdio.h>
#include<string.h>
int main()
{
int a,sum=0,i=0,temp=0,k;
char b[20]={"hello world"};
while(b[i]!='\0')
{
	if(b[i]==' ')
	{
		sum++;
	}
	temp++;
	i++;
	
}
k=temp-sum;

printf("no of letters %d",k);
return 0;

}
