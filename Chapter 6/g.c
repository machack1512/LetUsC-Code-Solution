#include<stdio.h>
#include<math.h>
int main()
{
    int x,i;
    float sum=0.0;
    printf("enter the value of the x:");
    scanf("%d",&x);

    for (i=0;i<=7;i++)
    {
        if (i==0)
        {
            sum=sum+x-1/x;
        }
        else if (i>0 && i<=7)
        {
            sum=sum+0.5*pow(x-1/x,i);

        }
           printf("sum of the seven number are:%d\n",sum);
        
    }
    return 0;
    
}
