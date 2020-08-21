#include<stdio.h>
#include<math.h>
int main(){
    int angle,sum;
    float redian;
    printf("enter the angle:");
    scanf("%d",&angle);
    redian=angle*3.14/180;
    ((sin(redian)*sin(redian)+cos(redian)*cos(redian))?printf("1"):printf("0"));
}