#include <stdio.h>
int main(void)
{
 int year;
 printf("Enter the year to cheak");
 scanf("%d",&year);
 if(year%4==0 || year%100==0 || year%400==0)
	{
		printf("\n It is a leap year");
	}
	else
	{
		printf("It is not a leap year");
	}
 
		return 0;
}
