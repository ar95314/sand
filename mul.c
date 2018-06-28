#include <stdio.h>

int main(void) {
	// your code goes here
	int num,mul,i;
	scanf("%d",&num);
	for(i=1;i<=5;i++)
	{
		mul = i*num;
		printf("%d ",mul);
	}
	return 0;
}
