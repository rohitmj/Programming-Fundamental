/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:
Program : Write a program to print odd natural numbers from 1 to 100 using do while loop
Lab Sheet No:15
Date: 9th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n=1;
    do
    {
        printf("%d\t",n);
        n=n+2;
    }
    while(n<=100);
    getch();
    return 0;
}
