#include<stdio.h>
int main()
{
 int a[5],n,k,i,sum=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 scanf("%d",&k);
 for(i=0;i<n;i++)
 {
 if(k==a[i])
 {
 	sum++;
 
 	
 }

 }
 printf("%d",sum);
 return 0;
    }
