/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:26
Program : Write a c program to Find largest of three numbers using ternary operators
Lab Sheet No:09
Date:12 December,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the First Number\n");
    scanf("%d",&a);
    printf("Enter the Second Number\n");
    scanf("%d",&b);
    printf("Enter the Third Number\n");
    scanf("%d",&c);
    (a>b && a>c)?printf("%d is the largest",a):(b>a && b>c)?printf("%d is the largest",b):printf("%d is the largest",c);
    getch();
    return 0;
}
