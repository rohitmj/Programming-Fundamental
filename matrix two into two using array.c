#include<stdio.h>
int main()
{
	int array[2][2]={1,2,3,4},i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}