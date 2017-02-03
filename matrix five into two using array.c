#include<stdio.h>
int main()
{
	int array[5][2]={1,2,3,4,5,6,7,8,9,10},i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}