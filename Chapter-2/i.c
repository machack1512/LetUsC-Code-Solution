#include<stdio.h>
int main()
{

    int n,hun,fif,ten,five,two,one,total;
    printf("Enter the sum of ruppes of n:");
    scanf("%d",&n);
   
    hun=n/100;
    n=n%100;
    fif=n/50;
    n=n%50;
    ten=n/10;
    n=n%10;
    five=n/5;
    n=n%5;
    two=n/2;
    n=n%2;
    one=n/1;
    n=n%1;
     
     total=hun+fif+ten+five+two+one;
     printf("total note are:%d",total);
     
     return 0;

    
}
