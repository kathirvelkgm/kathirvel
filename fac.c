#include<stdio.h>
int main()
{
int fac=1,i,n;
printf("Enter the number \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fac=fac*i;
}
printf("factorial is %d",fac);
return 0;
}
