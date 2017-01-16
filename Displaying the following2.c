/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no: 30
Program : Write a program to ask the number of rows and display the following
Lab Sheet No:16
Date: 16th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
