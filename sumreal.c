#include <stdio.h>
int main(void)
{
 int N,i;
 int sum=0;
 printf("Enter the real number");
 scanf("%d",&N);
 for(i=1;i<=N;i++)
 {
 	sum=sum+i;
 }
 printf("\n sum is %d",sum);
	return 0;
}
