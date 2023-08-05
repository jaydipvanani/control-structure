#include<stdio.h>

        // to Find min. no. from given 2 no. using if else.

void main ()
{
	int rating;
	printf("rating this work (10) = ");
	scanf("%d",&rating);
	

	if(rating<5)
	{
		printf(" good ");
	}
	else if(rating<8)
	{
		printf(" very good ");
	}
		else if(rating<11)
	{
		printf(" exellent ");
	}
	else
	{
		printf(" Enter Valid Rate !!!!!!!!!!!! ");
	}
	

}
