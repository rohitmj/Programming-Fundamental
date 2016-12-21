/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:23
Program : Write a program to find the even numbers from 1 to 100 using for loop
Lab Sheet No:04
Date:20 December,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    for(x=2;x<=100;x=x+2)
    {
        printf("%d\t",x);
    }
    getch();
    return 0;
}
