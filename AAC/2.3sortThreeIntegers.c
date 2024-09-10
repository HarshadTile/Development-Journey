#include<stdio.h>
void main(){
	int a = 100;
	int b = 40;
	int c = 10;
	int temp;
	printf("%d %d %d ",a,b,c);	
	if(a>b)
	{
		temp = a;
		a=b;     //40
		b=temp;  //100
	}
	else if(b>c){
		temp = b;
		b=c;  // 40
		c=temp; //10
	}
	else if(c>a){
		temp = c;
	}
	printf("%d %d %d ",a,b,c);
}
