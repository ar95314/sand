#include <stdio.h>
int main(void)
{
int a,b,c;
 printf("Enter the values for a,b,c");
 scanf("%d %d %d",&a,&b,&c);
 if((a>b)&&(a>c))
  {
   printf("\n a is greater");
  }
 else if(b>c)
  {
   printf("\n b is greater");
  }
 else
  {
   printf("\n c is greater");
  }	
	return 0;
}
 
