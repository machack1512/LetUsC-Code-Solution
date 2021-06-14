#include<stdio.h>
int main()
{
    int employee=1,hours;
    float rate;
    while (employee<=10)
    {
        printf("enter the hours of overtime:");
        scanf("%d",&hours);
        if (hours>=40)
        {
            rate=(hours-40)*12.00;
            printf("rate of the overtime:%f",rate);

        }
        else
        {
            printf("your overtime is less than 40 hours so you have no overtime salary:");
        }
        
        
        employee++;
    }
    return 0;
    
}