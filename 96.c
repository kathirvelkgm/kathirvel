#include<stdio.h>  
int main()  
{  
    int i,n,a;  
    scanf("%d",&n); 
        printf("Enter the number:%d",n);  
        for(i=1;i<n;i++)  
    {  
         if(n%i==0)   
         {  
             a=i;
         }  
    }  
    if(a>1)   
    {  
          printf("\nThe number is a composite number!");  
    }  
    else   
    {  
          printf("\nThis is not a composite number!");  
    }  
    return 0;  
}  
