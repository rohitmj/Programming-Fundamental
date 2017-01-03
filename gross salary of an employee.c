/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:26
Program : Write a program to find the gross salary of an employee
Lab Sheet No:
Date: 3rd Jan,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float S,H,D,G;
    printf("Enter the employee salary\n");
    scanf("%f",&S);
    if(S<1500)
    {
        H=0.1*S;
        D=0.9*S;
    }
    else
    {
        H=500;
        D=0.98*S;
    }
    G=S+H+D;
    printf("Employee Gross Salary is %f",G);
    getch();
    return 0;
}
