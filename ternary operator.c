/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Programme : Write a program to check odd or even using ternary operators
Date:7th December,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    (n%2==0)? printf("No is even"):printf("No is odd");
    getch();
    return 0;
}
