#include<stdio.h>
int main()
{
	float length;
	float breath;
	float area;
	float peremeter;
	printf("enter the value of length");
	scanf("%f",&length);
	printf("enter the value of breath");
	scanf("%F",&breath);
	area=length*breath;
	printf("area=%f",area);
	peremeter=2*(length+breath);
	return 1;
}