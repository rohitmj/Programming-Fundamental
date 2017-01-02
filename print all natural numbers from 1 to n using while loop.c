/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:26
Programe : Write a c program to print all natural numbers from 1 to n using while loop
Lab Sheet No:12
Date: 2nd jan,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(a<=n)
    {
        printf("%d\t",a);
        a++;
    }
    getch();
    return 0;
}
