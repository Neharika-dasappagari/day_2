#include<stdio.h>
int main()
{
	float num_1;
	float num_2;
	float num_3;
	float num_4;
	float num_5;
	float Average;
	
	printf("enter the num_1 value");
	scanf("%f",&num_1);
	printf("enter the num_2 value");
	scanf("%f",&num_2);
	printf("enter the num_3 value");
	scanf("%f",&num_3);
	printf("enter the num_4 value");
	scanf("%f",&num_4);
	printf("enter the num_5 value");
	scanf("%f",&num_5);
	Average=(num_1+num_2+num_3+num_4+num_5)/5;

	printf("the average value %f",Average);
	return 1;
}
	
	