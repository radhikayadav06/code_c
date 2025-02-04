/*write a c program to find transpose of a 2-D matrix*/
#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("Enter the value of r and c: ");
	scanf("%d%d",&r,&c);
	int a[r][c],trans[r][c];
	printf("Enter the elements: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j],trans[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			trans[j][i]=a[i][j];
		}
	}
	printf("Transpose elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
