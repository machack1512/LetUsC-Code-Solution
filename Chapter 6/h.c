#include<stdio.h>
int main()
{
    int i,j,k;
    for (i=1;i<=30;i++)
    {
        for (j=1;j<=30;j++)
        {
            for (k=1;k<=30;k++)
            {
                if (j*j+i*i==k*k)
                {
                    printf("all the pythagorean triplete:\n");
                }
                else
                {
                    printf("ERROR\n");
                }
                
                
            }
        }
    }
    return 0;
}