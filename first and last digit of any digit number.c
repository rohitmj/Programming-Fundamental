/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:
Program : Write a program to print first and last digit of any digit number
Lab Sheet No:15
Date: 11th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,rem,i;
    printf("Enter the digit number\n");
    scanf("%d",&n);
    rem = n%10;
    printf("The last digit of the number is %d\n",rem);
    i= n/10;
    while(i>=10)
    {
        i=i/10;
    }
    printf("The first digit of the number is %d",i);
    getch();
    return 0;
}


