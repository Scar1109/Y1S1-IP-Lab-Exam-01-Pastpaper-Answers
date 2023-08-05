#include<stdio.h>
int main (void)
{
	int opt,seat,extra;
	float Total;
	char type,extra_services;
	
	printf("Input Airline Option : ");
	scanf("%d",&opt);
	
	printf("Class type ( E / B ) : ");
	scanf(" %c",&type);
	
	printf("Number of seats: ");
	scanf("%d",&seat);
	
	if(type == 'E')
	{
		if(opt == 1)
			Total = 36500 * seat;
		else if(opt == 2)
			Total = 35800 * seat;
		else if(opt == 3)
			Total = 54600 * seat;
		else if(opt == 4)
			Total = 28500 * seat;
	}
	else if(type == 'B')
	{
		if(opt == 1)
			Total = 77600 * seat;
		else if(opt == 2)
			Total = 76500 * seat;
		else if(opt == 3)
			Total = 84700 * seat;
		else if(opt == 4)
			Total = 42800 * seat;
	}
	
	printf("Do you need any extra services ( y/n ) : ");
	scanf(" %c",&extra_services);
	
	while(extra_services=='y')
	{
		printf("Input your option : ");
		scanf("%d",&extra);
		
		if(extra==1)
			Total =	Total + 7800;
		else if(extra==2)
			Total =	Total + 1500;
		else if(extra==3)
			Total =	Total + 19500;
		else if(extra==4)
			Total =	Total + 2000;
		else
			printf(" Your entered an invalid option");
			
		printf("Do you need any extra services ( y/n ) : ");
		scanf(" %c",&extra_services);
	}
	printf("Total Price : %.2f",Total);
	return 0;
}