#include<stdio.h>
int main()
{
    int array1[3][3],array2[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the number:");
            scanf("%d",&array1[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",array1[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the number:");
            scanf("%d",&array2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",array2[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the 3*3 matrices is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",array1[i][j]+array2[i][j]);
        }
        printf("\n");
    }
    return 0;

}
