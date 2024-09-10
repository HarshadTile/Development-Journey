#include<stdio.h>

int linearSearch(int arr[] , int size, int target)
{
	int i;
	for( i = 0; i< size; i++)
	{
		if(arr[i] == target)
		{
			return i;
		}
	}
	return -1;
}	
int main(){
	int j,size,target,result;
	
	printf("Eneter the number of elements in the list:");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter %d elements: \n",size);
	
	
	for( j=0; j< size ;j++){
		scanf("%d",&arr[j]);
	}
		
	printf("Enter the element to search for :");
	scanf("%d",&target);
	
	result = linearSearch(arr, size , target);
	
	if(result != -1){
		printf("Element %d found at index %d.\n", target, result);
	}
	else
	{
		printf("Element %d not found in the list.\n",target);
		
	}
	return 0;
	
}
	



