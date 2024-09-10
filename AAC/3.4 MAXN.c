#include<stdio.h>
int main()
{
	int i,n ,max_no;
	
	printf("Enter Length of An Array :");
	scanf("%d",&n);
	
	int numbers [n];
	
	printf("Enter Elements %d:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&numbers[i]);
	}
	
	
	max_no = numbers[0];
	/*
	for(i =0;i<n;i++)
	{
		if(max_no>numbers[i+1])
		{
			max_no = numbers[i+1];
		}
		else
		{
			max_no = numbers[i+1];//45//80
		}
	}
	*/
	for(i=0;i<n ;i++){
		if(numbers[i] > max_no)
		{
			max_no = numbers[i];
		}
	}
	
	printf("%d",max_no);
}
