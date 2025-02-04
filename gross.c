/*The Techsoft company decided to insure its employees.The company decides upon 
a policy that is based on the gross salary of the employees working in the company. 
The insurance is deducted as per the following slabs:
       If salary<=10000/month then insurance = 5% of the salary.
       If salary>10000/month and salary<=25000 then insurance = 7%of salary
       If salary>25000/month and salary<=50000 then insurance=10% of salary
       If salary>50000/month then insurance = 12% of salary
Implement a C program to calculate the balance salary after deductions and the 
insurance amount deducted for an employee having a salary 's'.Display the results/*
#include<stdio.h>
int main()
{
	int salary,insurance,balancesal;
	printf("Enter the salary");
	scanf("%d" ,&salary);
	if(salary<=10000)
	{
		insurance = salary*0.05;
	}
	else if(salary>10000 && salary <=25000)
	{
		insurance = salary*0.07;
	}
	else if(salary>25000 && salary <=50000)
	{
		insurance = salary*0.10;
	}
	else
	{
		insurance = salary*0.12;
	}
	balancesal = salary - insurance;
	printf("insurance %d :", insurance);
	printf("balancesal %d", balancesal);
	return 0;
}