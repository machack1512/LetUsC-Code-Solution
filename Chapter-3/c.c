#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
 
    if (year%100==0 && year%400==0 || year%4==0 )
    {
        printf("LEAP YEAR");
    }
    else
    {
        printf("NOT A LEAP YEAR");       
    }
    return 0;
    
}