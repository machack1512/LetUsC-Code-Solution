#include<stdio.h>
#include<math.h>
int main()
{
    int l1,l2,g1,g2;
    float D;
    
    printf("ente the latidude and logitude:");
    scanf("%d%d%d%d",&l1,&l2,&g1,&g2);
    
    l1=l1*3.14/180;
    l2=l2*3.14/180;
    g1=g1*3.14/180;
    2=g2*3.14/180;

    D=3963*acos(sin(l1)*sin(l2)-cos(l1)*cos(l2)*cos(g2-g1));
    
    printf("distance in nauticalmilles:%f",D);
    
    return 0;
}
