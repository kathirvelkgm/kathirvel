#include<stdio.h>
int main()
{ int hour1,hour2,min1,min2,a,b;
scanf("%d%d",&hour1,&hour2);
scanf("%d%d",&min1,&min2);
a=hour1-hour2;
b=min1-min2;
printf("abs value=%d %d",a,b);
return 0;
}
