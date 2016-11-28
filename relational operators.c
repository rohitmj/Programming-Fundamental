/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Program : Write a program to use a relational operators.
Lab Sheet No:06
Date:28 November,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    a==b;
    printf("use of == is %d\n",a==b);
    a>b;
    printf("use of > is %d\n",a>b);
    a<b;
    printf("use of |= is %d\n",a<b);
    a>=b;
    printf("use of >= is %d\n",a>=b);
    a<=b;
    printf("use of <= is %d\n",a<=b);

    getch();
    return 0;

}

