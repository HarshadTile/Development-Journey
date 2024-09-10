#include<stdio.h>



int main(){
	
	int x,n,i;
	int Result = 1;
	
	printf("Enter X Value :\n");
	scanf("%d",&x);
	
	printf("Enter N Value :\n");
	scanf("%d",&n);
	
	
	
	for(i=0;i<n;i++)
	{
		Result*=x;
		
	}
	printf("%d^%d=%d",x,n,Result);
}
