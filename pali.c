#include<stdio.h>
void main()
{
int n,sum=0,k;
scanf("%d",&n);
k=n;
while(k!=0)
{
sum=sum*10;
sum=sum+k%10;
k=k/10;
}
if(sum==n)
printf("number is palindrome");
else
printf("number is not palindrome");
}
