#include<stdio.h>
int main()
{
 int i,s=0,t;   
    int n;
    scanf("%d",&n);
    while(n!=0)
    {t=n%10;
       n=n/10;
        s++;
        }
    printf("number of digits of an integer %d",s);
    return 0;
}
