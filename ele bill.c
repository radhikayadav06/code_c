/*Write a C program to input electricity unit charges and calculate total electricity bill according to the given conditions:
For 0 unit to 100 unit- Rs. 2.80/unit
For 101 unit to 200 units- Rs3.75/unit
For 201 unit to 400 units- Rs5.15/unit
For unit above 400 Rs 5.90/unit/* 
#include<stdio.h>
int main()
{
	int unit, bill;
	printf("Enter the number of units: ");
	scanf("%d", &unit);
	if(unit>=0 && unit<=100)
	{
		bill=unit*2.80;
	}
	else if(unit>=101 && unit<=200)
    {
    	bill=unit*3.75;
	}
	else if(unit>=201 && unit<=400)
	{
		bill=unit*5.15;
	}
	else
	{
		bill=unit*5.90;
	}
	bill=bill+bill*0.20;
	printf("Total electricity bill is :%d",bill);
	return 0;
}