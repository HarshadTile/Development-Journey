#include<stdio.h>
int main(){
	int j,i,k,flag,temp;
	int a[]= { 50 ,10 , 40 ,55 ,89,59,30 ,20};
	int n = sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		flag = 0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j]=a[j+1];
				a[j+1] = temp;
				flag = 1;
			}
		}
		if(flag!=1)
		{
			break;
		}
	}
	for(k=0;k<n;k++)
	{
		printf("%d ",a[k]);
	}
	
}
