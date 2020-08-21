#include<stdio.h>
int main()
{
    int a,b,c,angle1,angle2,angle3;
    printf("enter the sides of trangle:");
    scanf("%d%d%d",&a,&b,&c);
    printf("enter the angles:");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    if (a==b || b==c || c==a && angle1==angle2 || angle3==angle3 || angle3==angle1)
    {
        printf("ISOSCELES TRIANGLE");
    }
    else if (a==b==c && angle1==angle2==angle3==60)
    {
        printf("EQUATRIAL TRANGLE");
    }
    else if (angle1==90 || angle2==90 || angle3==90)
    {
        printf("RIGHT ANGLE TRANGLE");
    }
    else
    {
        printf("NORMAL TRIANGLE");
    }
    return 0;
}