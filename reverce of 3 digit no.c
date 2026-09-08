// reverce of given 3 digit number 
#include<stdio.h>
void main()
{
	int n,d1,d2,d3,rev;
	printf("Enter the number ");
	scanf("%d",&n);
	// logic for reverce of number 
	d1=n/100;
	d2=(n/10)%10;
	d3=n%10;
	rev=d3*100+d2*10+d1*1;
	printf("Reverce of the number is %d\n",rev);
	
}
