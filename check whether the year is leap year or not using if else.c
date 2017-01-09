/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:
Program : Write a program to check whether the year is leap year or not using ternary operator
Lab Sheet No:15
Date: 9th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the year\n");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("%d is a leap year",a);
    }
    else if(a%400==0)
    {
        printf("%d is a leap year",a);
    }
    else if(a%100!=0)
    {
        printf("%d is a not a leap year",a);
    }
    getch();
    return 0;
}
