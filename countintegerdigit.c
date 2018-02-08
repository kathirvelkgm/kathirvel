#include<stdio.h>
int main()
{
 int i,sum=0,temp;   
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
       temp=n%10;
       n=n/10;
        sum++;
        }
    printf("number of digits of an integer %d",sum);
    return 0;
    }
