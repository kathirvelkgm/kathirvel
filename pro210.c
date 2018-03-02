#include <stdio.h>
int main()
{
    int a,b,c=1,p;
    scanf("%d%d",&a,&b);
  while (b!=0)
    {
       c=c*a;
       b--;
    }
printf("p=%d",c);
return 0;
}
