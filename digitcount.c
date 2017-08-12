#include <stdio.h>
 
int main(void) 
{
	int n,count=0;
	printf("\n Enter the value for n");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count=count+1;
	}
	printf("\n The number of digit in n is %d",count);
	return 0;
}
 
