/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:26
Program : Write a program to find the working year of the employee
Lab Sheet No:
Date: 3rd Jan,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,z;
    printf("Enter the current year of employee\n");
    scanf("%d",&a);
    printf("Enter the joined year of employee\n");
    scanf("%d",&b);
    z=a-b;
    if(z>3)
    {
        printf("2500 bonus is given");
    }
    else
    {
        printf("No Bonuses");
    }
    getch();
    return 0;
}
