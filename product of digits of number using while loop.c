/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no: 30
Program : Write a program to find the product of digits of number
Lab Sheet No:15
Date: 13th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,pro=1,rem=1;
    printf("Enter any number\n");
    scanf("%d",&i);
    while(i>0)
    {
        rem=i%10;
        i=i/10;
        pro=rem*pro;
    }
    printf("The product of the given digit number are %d",pro);
    getch();
    return 0;
}
