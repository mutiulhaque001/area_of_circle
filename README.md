# area_of_circle
A simple program to find the area and circumference of a circle.

#include<stdio.h><br>
int main()<br>
{<br>
&emsp;	int r;<br>
&emsp;	double pi=3.14,area,circumference;<br>
&emsp;	printf("Enter the radius of the circle\n");<br>
&emsp;	scanf("%d",&r);<br>
&emsp;	area=pi*r*r;<br>
&emsp;	circumference=2*pi*r;<br>
&emsp;	printf("Area=%.3f\n",area);<br>
&emsp;	printf("Circumference=%.3f\n",circumference);<br>
}<br>
