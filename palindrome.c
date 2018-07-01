#include <stdio.h>

int main(void) {
	// your code goes here
	int num , rem = 0 , temp , var ;
	scanf ("%d", &num) ;
	temp = num;
	while (num != 0)
	{
		var = num % 10 ;
		rem = rem * 10 + var ;
		num = num / 10 ;
	}
	if ( temp == rem)
	   printf("yes") ;
	else
	   printf("no") ;
	return 0;
}
