#include<stdio.h>
int main()
{
  char a[10],b[10];
  int i=0,j=0;
  scanf("%s%s",a,b);
  printf("Enter First String:%s",a);
  printf("\nEnter Second String:%s",b);
  while(a[i]!='\0')
  i++;
  while(b[j]!='\0')
  {
    a[i]=b[j];
    j++;
    i++;
  }
  a[i]='\0';
  printf("\nConcatenated String is %s",a);
  return 0;
}
