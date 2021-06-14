//generate first 25 terms of the fibonacci sequence
#include<stdio.h>
void fibo(int,int);
int main()
{
    int i,t,old=0,current=1,new;
    printf("%d\t%d\t",old,current);
    fibo(old,current);

    return 0;

}
void fibo(int old,int current)
{
    static int term=2;
    int new;
    if (term<20)
    {
        new=old+current;

        printf("%d\t",new);
        fibo(current,new);
    }
    else 
    return ;
    
}