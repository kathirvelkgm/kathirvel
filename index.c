#include <stdio.h>
int main()
{
    int arr[1000]; 
    int i,N;
    printf("Enter size of array");
    scanf("%d",&N);
    printf("%dEnter elements in the array ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements in array are:");
    for(i=0;i<N;i++)
    {
        printf("\n%d\t%d ",arr[i],i);
    }


    return 0;
}
