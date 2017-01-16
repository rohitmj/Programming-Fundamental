/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:
Program : Write a program to count the number of digits of any digit number using do while loop
Lab Sheet No:15
Date: 11th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,count=0;
    printf("Enter the numbers\n");
    scanf("%d",&i);
    do
    {
        i=i/10;
        count = count + 1;
    }
    while(i>0);
    printf("The total number of digits are %d",count);
    getch();
    return 0;
}


