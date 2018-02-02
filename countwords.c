#include<stdio.h>
#include<string.h>
int main()
{
int a,sum=1,i=0;
char b[20]={"hello world u u u"};
while(b[i]!='\0')
{
	if(b[i]==' ')
	{
		sum++;
	}

	i++;
	
}
printf("no of words %d",sum);
return 0;

}
