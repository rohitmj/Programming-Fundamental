/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:
Program : Write a program to print all odd natural numbers between 1 to 100 using while loop
Lab Sheet No:15
Date: 9th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int r=1;
    while(r<=100)
    {

        printf("%d\t",r);
        r=r+2;

    }
    getch();
    return 0;
}
