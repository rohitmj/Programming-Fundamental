/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Programe : Write a program to use assignment operator
Lab Sheet No:07
Date:30 November,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
        int a,b;
        printf("Enter the first number:\n");
        scanf("%d",&a);
        printf("Enter the second number:\n");
        scanf("%d",&b);
        a+=b;
        printf("use of += is %d\n",a);
        a-=b;
        printf("use of -= is %d\n",a);
        a*=b;
        printf("use of *= is %d\n",a);
        a/=b;
        printf("use of /= is %d",a);
        getch();
        return 0;
}
