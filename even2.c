#include <stdio.h>
int main()
{
    int num,m,n;
    scanf("%d%d",&m,&n);
    printf("Print even Numbers in a given range");
    for (num=m;num<=n;num++)
        {
               if (num%2==0)
                  printf ("%d\n",num);
         }
return 0;
}
