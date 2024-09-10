#include<stdio.h>
int main()
{
	int i,n ,min_no;
	
	printf("Enter Length of An Array :");
	scanf("%d",&n);
	
	int numbers [n];
	
	printf("Enter Elements %d:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&numbers[i]);
	}
	
	
	min_no = numbers[0];

	for(i=0;i<n ;i++){
		if(numbers[i] < min_no)
		{
			min_no = numbers[i];
		}
	}
	
	printf("%d",min_no);
}
