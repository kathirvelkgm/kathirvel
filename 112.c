#include<stdio.h>
int main()
{
 int a[5],n,k,i;
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
 	printf("yes");
 }
 else
 {
 	printf("no");
 }
return 0;
 }
    }
