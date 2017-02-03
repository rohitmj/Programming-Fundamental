#include<stdio.h>
int main()
{
	int add,array1[2][2],array2[2][2],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the number:\t");
			scanf("%d",&array1[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",array1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the number:\t");
			scanf("%d",&array2[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",array2[i][j]);
		}
		printf("\n");
	}
	printf("The sum of the 2*2 matrices are:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",array1[i][j]+array2[i][j]);
        }
        printf("\n");
    }

	return 0;
}
