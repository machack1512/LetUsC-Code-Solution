#include<stdio.h>
int main()
{
    int year,firstday;
    printf("Enter the year:");
    scanf("%d",&year);
 
    if (year%100==0 && year%400==0 || year%4==0 )
    {
    
        firstday=366/year;
        if (firstday==2){
            printf("MONDAY");
        }
    }
    else
    {
        printf("NOT A LEAP YEAR");      
    }
    return 0;



}