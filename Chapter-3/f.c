#include<stdio.h>
int main()
{
    int ram,syam,ajay;
    printf("enter the ages:");
    scanf("%d%d%d",&ram,&syam,&ajay);

    if(ram<syam && ram<ajay){
        printf("ram is younger");

    } 
    else if (syam<ajay){
        printf("syam is younger");
    }
    else
    {
        printf("ajay is younger");
    }
    return 0;
    
}