/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no: 30
Program : Write a program to print any number and find its reverse
Lab Sheet No:15
Date: 13th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,rem,rev=0;
    printf("Enter the number\n");
    scanf("%d",&i);
    do
    {
        rem=i%10;
        i=i/10;
        rev=rev*10+rem;
    }
    while(i>0);
    printf("The reverse of the number is %d",rev);
    getch();
    return 0;
}

