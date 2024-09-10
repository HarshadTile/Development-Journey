#include<stdio.h>
void main()
{
	int a , b , c;
	printf("Enter First Number :");
	scanf("%d",&a);
	
	printf("Enter Second Number :");
	scanf("%d",&b);
	
	printf("Enter Third Number :");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf(" %d is Greator Number :",a);
	}
	else if(b > a && b > c)
	{
		printf("%d is Greator Number :",b);
	}
	else
	{
		printf("%d is Greator Number :",c);
	}
}
