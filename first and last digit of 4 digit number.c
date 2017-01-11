/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:
Program : Write a program to print first and last digit of 4 digit number
Lab Sheet No:15
Date: 11th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,rem,i;
    printf("Enter the four digit number\n");
    scanf("%d",&n);
    rem = n%10;
    printf("The last digit of the number is %d\n",rem);
    for(i=1;i<4;i++)
    {
        n = n/10;
    }
    printf("The first digit of the number is %d",n);
    getch();
    return 0;
}


