#include<stdio.h>
int main()
{
    float sell_price,cost_price,t;
    printf("selling price:");
    scanf("%f",&sell_price);
    printf("cost price:");
    scanf("%f",&cost_price);

    t=sell_price-cost_price;
    
    if (t>0)
    {
        printf("PROFIT:%f",t);
    }
    else if (t<0){
        printf("LOSS:%f",t);
    }
    else{
     printf("no profit or loss");
    }
    return 0;

}
