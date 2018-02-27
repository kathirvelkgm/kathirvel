#include<stdio.h>
int main()
{
int a,b,v=0;
scanf("%d%d",&a,&b);
v=a;
a=b;
b=v;
printf("\na=%d",a);
printf("\nb=%d",b);
return 0;
}
