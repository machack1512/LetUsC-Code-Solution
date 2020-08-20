#include<stdio.h>
#include<math.h>
int main()
{

    int r,t;
    float wcf;
    
    printf("Enter the value of r,t:");
    scanf("%d%d",&r,&t);
 
    wcf=35.74+0.6215*t+(0.427*t-35.75)*pow(r,0.16);
  
    printf("\n\nWCF:%f",wcf);
    
    return 0;
  


}
