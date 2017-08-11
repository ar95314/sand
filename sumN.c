#include <stdio.h>
int main(void) {
	int i,N;
	int sum=0;
	printf("Enter N");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		sum=sum+i;
	}
	printf("\n sum of N is %d",sum);
	return 0;
}

