/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:26
Program : Write a c program to Find largest of two numbers using ternary operators
Lab Sheet No:09
Date:12 December,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    (a>b)?printf("%d is the largest",a):printf("%d is largest",b);
    getch();
    return 0;
}
