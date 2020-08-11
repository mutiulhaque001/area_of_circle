#include<stdio.h>
int main()
{
	int r;
	double pi=3.14,area,circumference;
	printf("Enter the radius of the circle\n");
	scanf("%d",&r);
	area=pi*r*r;
	circumference=2*pi*r;
	printf("Area=%.3f\n",area);
	printf("Circumference=%.3f\n",circumference);
}	
