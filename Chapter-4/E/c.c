#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number:");
    scanf("%d%d%d",&a,&b,&c);
    if (a!=0 && b!=0 && c!=0)
    ((a>b && a>c || b>c)?printf("number:%d",a):printf("number:%d",b));
    else
    printf("\nnumber:%d",c);
    return 0;

}