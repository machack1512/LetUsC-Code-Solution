// Count number of positive,negetive and zeros
#include <stdio.h>
int main()
{
	int pos,neg,zero,num;
	char ans = 'y';
	 
	pos=neg=zero=0;
    while (ans == 'y' || ans == 'Y')
    {
    	printf("\n Enter the number:");
    	scanf("%d",&num);
    	
    	 if (num == 0)
    	 zero++;
    	 
    	 if (num > 0)
    	 pos++;
    	 
    	 if (num < 0)
    	 neg++;
    	 
    	 fflush(stdin);
    	 
    	 printf("\nDo you want to continue?");
    	 scanf("%c",&ans);
    	 
	}
	printf("you entered %d positive number\n",pos);
	printf("you entered %d negtive number\n",neg);
	printf("you entered %d zero\n",zero);
	return 0;
	
    
	
}
