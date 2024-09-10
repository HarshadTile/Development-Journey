#include<stdio.h>
int main()
{
	int n ;
	printf("Enter  Number :");
	scanf("%d",&n);
	
	int sum =0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("The Given No Is Sum  Of All Divisors :",sum);
		
	}
	else
	{
		printf("The Given No is Not Sum of All Its Divisors :");
	}
	return 0;
}

