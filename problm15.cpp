#include<stdio.h>
int main()
{
	unsigned long long int grid[21][21];
	int i,j;
	for(int i=0;i<21;i++)
	{
		for(int j=0;j<21;j++)
		{
			grid[i][j]=1;
		}
	}
	for(int i=1;i<21;i++)
	{
		for(int j=1;j<21;j++)
		{
			grid[i][j]=grid[i-1][j]+grid[i][j-1];
		}
	}
	printf("%llu ",grid[20][20]);
	return 0;
	
}
