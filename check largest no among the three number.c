/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Programme : Write a program to check check largest number among the three numbers
Lab Sheet No:07
Date:7th December,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    printf("Enter the value of c:\n");
    scanf("%d",&c);
    if(a>=b && a>=c)
    {
    printf("Largest is :%d",a);
    }
    else if(b>=a && b>=c)
    {
    printf("Largest is :%d",b);
    }
    else
    {
    printf("Largest is :%d",c);
    }
    getch();
    return 0;
}
