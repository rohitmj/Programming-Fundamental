/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no : 30
Program : Write a c program to print the fibonacci series
Lab Sheet No : 19
Date : 20 jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,r=1,c=1;
    while(r<=10)
    {
        printf("%d\t",c);
        c=a+b;
        a=b;
        b=c;
        r++;
    }
    getch();
    return 0;

}
