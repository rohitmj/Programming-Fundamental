#include<stdio.h>
int main()
{
    int array[2][2],determinant,i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the numbers of 2*2 matrix:");
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    determinant=array[1][1]*array[0][0]-array[0][1]*array[1][0];
    printf("The determinant of the given 2*2 matrix is %d",determinant);


}
