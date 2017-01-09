/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:
Program : Write a program to print all natural numbers from n to 1(reverse order) using do while loop
Lab Sheet No:15
Date: 9th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    a=1;
    do
    {
        printf("%d\t",n);
        n--;
    }
    while(n>=a);
    getch();
    return 0;
}
