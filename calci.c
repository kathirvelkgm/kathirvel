#include<stdio.h>
int main()
{
	char i;
	int a,b,c;
	scanf("%d\t%d\n",&a,&b);
	scanf("%c",&i);
	switch(i)
	{ 
		case '+':
			c=a+b;
			printf("%d",c);
			break;
		
		case '-':
			c=a-b;
			printf("%d",c);
			break;
		
		case '*':
			c=a*b;
			printf("%d",c);
			break;
		case'/':
			c=a/b;
			printf("%d",c);
			break;
	
		dafault:
			printf("choose different");
	}
	
	return 0;

	
}
