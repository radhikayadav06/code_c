/*Write a c program to find the sum of periferal elements*/
#include<stdio.h>
int main()
{
	int i,j,r,c,flag=1,sum=0;
	printf("Enter the value of r and c: ");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the elements: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if((i==0)||(i==r-1)||(j==0)||(j==c-1))
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("Sum of periferal elements: %d\n",sum);
	return 0;
}
