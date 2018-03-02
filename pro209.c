#include <stdio.h>
int main()
{
    int a,b,p,v,d;
    long int c;
    scanf("%d%d%d",&a,&b,&c);
    p=(a^b);
    v=p%c;
printf("d=%d",v);
return 0;
}
