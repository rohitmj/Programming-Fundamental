/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Program : Write a program to enter any number and calculate its square.
Lab Sheet No:06
Date:28 November,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,sq;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    sq=pow(n,2);
    printf("Square of the given number is:%d",sq);
    getch();
    return 0;
}
