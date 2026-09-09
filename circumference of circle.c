//program to calculate the circumference of a circle 
#include<stdio.h>
#define pi 3.14
void main()
{
    float r,cir;
	printf("Enter the value of radius\n");
	scanf("%f",&r);
	cir=2*pi*r;
	printf("The circumference of the given circle is %f",cir);
}
