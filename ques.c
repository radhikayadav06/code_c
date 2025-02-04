/*Write a c-program to find sum and avg of elements*/
#include <stdio.h>
int main()
{
	int sum=0,n,i;
	float avg;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the no. of elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
    }
	for(i=0;i<n;i++)
	{
		avg=sum/n;
    }
    printf("Sum of the elements is %d\n",sum);
    printf("Average of the elements is %f\n",avg);
	return 0;
}
