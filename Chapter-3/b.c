#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("even number");
    } 
    else if (n%2==1)
    {
    printf("odd number");
    }
    else{
        printf("ERROR");
    }
    return 0;
    
    
}