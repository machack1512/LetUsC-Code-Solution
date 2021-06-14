#include<stdio.h>
int main()
{
    int choose,n,i=1,fact=1,t,x=2,y;
    lable:
    printf("1.factorial\n2.prime numaber\n3.odd or even number\n4.exit\n");
    printf("enter the choose:");
    scanf("%d",&choose);

    switch (choose)
    {
        case 1:
        printf("enter the number:");
        scanf("%d",&n);
        while (i<=n)
        {
            fact=fact*i;
            i++;
        }
        printf("the factorial of the %d is:%d\n",n,fact);
        goto lable;
        
        case 2:
        printf("enter the number:");
        scanf("%d",&t);
        while (x<=t-1)
        {
            if (t%x==0)
            {
                printf("not a prime number\n");
                break;
            }
            x++;
            
        }
        if (x==t)
        {
            printf("prime number\n");
        }
        goto lable;

        case 3:
        printf("enter the number:");
        scanf("%d",&y);
        if (y%2==0)
        {
            printf("even number\n");
        }
        else
        {
            printf("odd number\n");
        }
        goto lable;

        case 4:
     exit();       
    }
    return 0;
}