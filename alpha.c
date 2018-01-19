#include <stdio.h>
int main()
{
    char d;
    printf("Enter a character: ");
    scanf("%d",&d);

    if( (d>='a' && d<='z') || (d>='A' && d<='Z'))
        printf("%d is an alphabet.",d);
    else
        printf("%d is not an alphabet.",d);

    return 0;
}
