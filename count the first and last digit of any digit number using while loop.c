/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:
Program : Write a program to print first and last digit of any digit number using while loop
Lab Sheet No:15
Date: 11th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,count=1;
    printf("Enter the digit number\n");
    scanf("%d",&i);
    while(i>=10)
    {

        i=i/10;
        count=count + 1;
    }
    printf("The total number of digits are %d",count);
    getch();
    return 0;
}


