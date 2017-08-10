#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	if(n==0)
	{
		printf("n is zero");
	}
	else if(n>0)
	{
		printf("n is positive");
	}
	else
	{
		printf("n is negative");
	}

	return 0;
}
