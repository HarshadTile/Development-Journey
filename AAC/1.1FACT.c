#include<stdio.h>
void fact(int n)
{
	
	
	int fact = 1;
	int i;
	
	
	for(i=1;i<=n;i++)
	{
		fact = fact *i;
		
	}
	printf("\n %d",fact);
	
	
}
int main()
{
	int n;
	printf("Enter Number to Calculate Factorial :");
	scanf("%d",&n);
	fact(n);
}
