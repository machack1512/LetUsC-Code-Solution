#include<stdio.h>
int main()
{
    char n;
    printf("Enter the character:");
    scanf(" %c",&n);

    if (n>=65 && n<=90)
    {
        printf("upper case");
    }
    else if (n>=97)
    {
        printf("lower case");

    }
    else
    {
        printf("special symbol");
    }
    return 0;
    
    
}