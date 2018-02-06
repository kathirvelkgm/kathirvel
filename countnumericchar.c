#include<stdio.h>
#include<string.h>
int main()
{
 int i,sum=0;   
    char a[50]="a is bdfjgbhjbhhdf 123354646";
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            sum++;
        }
    }
    printf("number of numeric character %d",sum);
    return 0;
    }
