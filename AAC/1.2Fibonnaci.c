#include<stdio.h>
void Fibonacci()
{
	int a=0 , b=1,temp,i;
	
	for(i=0;i<11;i++)
	{
		temp=a+b;
	    printf("%d",temp);
	    a=b;
	    b=temp;
		
	}
	printf("\n");
	
}
int main()
{
	Fibonacci();
	return 0;
	
}
