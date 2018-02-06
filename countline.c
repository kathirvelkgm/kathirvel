#include<stdio.h>
#include<string.h>
int main()
{
int a,sum=1,i=0;
char b[30]={"hello world u u u. I AM GOOD.AND I AM BAD"};
while(b[i]!='\0')
{
	if(b[i]=='.')
	{
		sum++;
	}

	i++;
	
}
printf("NO OF LINES  %d",sum);
return 0;

}
