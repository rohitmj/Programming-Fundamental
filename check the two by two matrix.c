#include<stdio.h>
int main()
{
    int count=0,array1[2][2],array2[2][2],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the number for 2*2 matrix:");
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
            printf("Enter another number for 2*2 matrix:");
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
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(array1[i][j]==array2[i][j])
            {
                count=count+1;
            }
        }
    }
    if(count==4)
    {
        printf("Both matrices are equal");
    }
    else
    {
        printf("Both matrices are not equal");
    }

}
