/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:
Program : Write a program to calculate the sum of digits of any number using for loop
Lab Sheet No:15
Date: 13th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum=0,rem;
    printf("Enter the number\n");
    scanf("%d",&i);
    for(i;i>0;sum=rem+sum)
    {
        rem=i%10;
        i=i/10;
    }
    printf("The sum of the numbers are %d",sum);
    getch();
    return 0;
}
