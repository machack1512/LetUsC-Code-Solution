#include<stdio.h>
int main()
{
    int C,D,t;
    
    printf("ENter the numberC:");
    scanf("%d",&C);
    printf("D:");
    scanf("%d",&D);

    t=C;
    C=D;
    D=t;
    
    printf("reverse the number:%d",C);
    printf("\nreverse number:%d",D);
    
    return 0;

}
