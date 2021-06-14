#include<stdio.h>
int main()
{
    printf("all prime number between 1 to 300\n");
    int i,n=1;
     while (n<=300)
    {
        i=2;
        while (i<n)
        {
            if (n%i==0)
            break;
            else
            i++;
            
            
        }
        if (i==n)
        {
            printf("%d\t",n);
        }
        n++;
        
        
         
    }
    return 0;
    
}