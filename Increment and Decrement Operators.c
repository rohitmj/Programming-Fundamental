/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Program : Write a program to demonstrate the working of increment and decrement operators.
Lab Sheet No:08
Date: 2nd December,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf(" Post Increment of Operator is=%d\n",a++);
    printf(" pre Increment of Operator is=%d\n",++a);
    printf("post Decrement of operator is=%d\n",a--);
    printf("pre Decrement of operator is=%d",--a);
    getch();
    return 0;
}
