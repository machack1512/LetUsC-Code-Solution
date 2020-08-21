#include<stdio.h>
int main()
{
    float height,weight,BMI;
    printf("enter the height(m):");
    scanf("%f",&height);
    printf("enter the weight(kg):");
    scanf("%f",&weight);

    BMI=weight/height*height;
     
    if (BMI<15)
    {
        printf("starvation");
    }
    else if (BMI>15.1 && BMI<17.5)
    {
        printf("anorexia");

    }
    else if (BMI>17.6 && BMI<18.5)
    {
        printf("under weight");

    }
    else if (BMI>18.6 && BMI<24.9)
    {
        printf("ideal");
    }
    else if (BMI>25 && BMI<25.9)
    {
        printf("overweight");
    }
    else if (BMI>30 && BMI<30.9)
    {
        printf("obese");
    }
    else
    {
        printf("moebidly obses");
    }
    return 0;
    }