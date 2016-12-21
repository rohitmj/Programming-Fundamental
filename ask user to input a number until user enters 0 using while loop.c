/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:23
Program : Write a program to ask user to input a number until user enters 0 using while loop
Lab Sheet No:
Date:20 December,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    while(x!=0)
    {
        printf("Enter a Number\n");
        scanf("%d",&x);
    }
    getch();
    return 0;
}
