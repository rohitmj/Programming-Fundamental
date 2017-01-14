/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no: 30
Program : Write a program to find the product of digits of number using do while loop
Lab Sheet No:15
Date: 13th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,rem=1,pro=1;
    printf("Enter the number\n");
    scanf("%d",&i);
    do
    {
        rem=i%10;
        i=i/10;
        pro = rem*pro;
    }
    while(i>0);
    printf("The product of the given digit number is %d",pro);
    getch();
    return 0;
}
