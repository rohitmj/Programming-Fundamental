/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Programme : Write a program to print division of 1st and 2nd division
Lab Sheet No:07
Date:7th December,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(n>=80)
    {
    printf("Distinction");
    }
    else if(n>=60 && n<80)
    {
    printf("First Division");
    }
    else if(n>=50 && n<60)
    {
    printf("Second Division");
    }
    else if(n>=45 && n<50)
    {
    printf("Third Division");
    }
    else
    {
    printf("Fail");
    }
    getch();
    return 0;
}
