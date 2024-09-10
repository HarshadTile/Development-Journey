#include<stdio.h>
int main()
{
	int i,n ,j,temp,min;
	
	printf("Enter Length of An Array :");
	scanf("%d",&n);
	
	int numbers [n];
	
	printf("Enter Elements %d:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&numbers[i]);
	}
	
	for(i=0;i<n;i++)
	{
	    min=i;
		for(j=i+1;j<n;j++)
		{
			if(numbers[j] < numbers[min])
			{
				min = j;
			}	
		}
	temp = numbers[i];
		numbers[i]=numbers[min];
		numbers[min]= temp;
		

	}
	for(i=0;i<n;i++)
	{
		printf("%d |",numbers[i]);
	}
	
	

}
