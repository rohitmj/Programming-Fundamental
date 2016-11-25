/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Program : Write a c program to print logical operators
Lab Sheet No:05
Date:25 November,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,AND;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n",b);
    scanf("%d",&b);
    AND=a&&b;
    printf("The logical operator of AND is:%d",AND);
    getch();
    return 0;
}
