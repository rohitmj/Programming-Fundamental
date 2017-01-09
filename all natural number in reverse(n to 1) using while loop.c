/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:
Program : Write a program to print all natural number in reverse(n to 1) using while loop
Lab Sheet No:15
Date: 9th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n>=a)
    {
        printf("%d\t",n);
        n--;
    }
    getch();
    return 0;
}
