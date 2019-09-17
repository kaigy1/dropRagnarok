#include<stdio.h>
int main(void)
{
	double value;
	unsigned price;
	long int i=1;
	double p,k;
	for(;;)
	{
	i=1;		
	printf("what is the price in market?\n");
	scanf ("%u" , &price);
	
	printf("what is the drop probability?\n");
	scanf ("%lf" , &p);
	
	
	value=price/(100/p);
	
	p=p/100;
	p=1.000000-p;
	k=p;
	while( p>.50)
	{ 
		
	
		p=( p*k);
		i++;
	}
	
	
//value=price/(i*2);
	printf("the number of kills of that monster for a 50%% chance of drop is:\n %d\n",i);
	
	i= 1;
	p=k;
	while(p>.2)
	{
		
		p=p*k;
		i++;
	}
	printf("the number of kills of that monster for a 80%% chance of drop is:\n %d\n",i);
	
	i=1;
	p=k;
	while(p>.05)
	{
		p=p*k;
		i++;
	}
	printf("the number of kills of that monster for a 95%% chance of drop is:\n %d\n",i);
	
			
	printf("the value of the monster kill is on average:\n %lf\n ",value);
	
	printf("\n\n");
	
	printf("the value cost of giving a double strafe with a GJ at 156 is %d \n",156/2);
	printf("the value cost of teleport is %d \n",156*10/24);
	printf("\n\n\n\n\n\n");
	}

	

}
