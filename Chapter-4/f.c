#include<stdio.h>
int main()
{
    int hardness,tensile;
    float carbon;
    printf("hardness:");
    scanf("%f",&hardness);
    printf("carbon:");
    scanf("%f",&carbon);
    printf("tensile:");
    scanf("%f",&tensile);

    if (hardness>50 && carbon<0.7 && tensile>5600)
    {
        printf("GRADE 10");
    }
    else if (hardness>50 && carbon<0.7)
    {
        printf("GRADE 9");
    }
    else if (carbon<0.7 && tensile>5600)
    {
        printf("GRADE 8");
    }
    else if (hardness>50 && tensile>5600) 
    {
        printf("GRADE 7");
    }
    else if (hardness>50 || carbon<0.7 || tensile>5600)
    {
        printf("GRADE 6");
    }
    else
    {
        printf("GRADE 5");
    }
    return 0;    
}