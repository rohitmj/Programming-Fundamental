/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:26
Programe : Write a c program to check the number is odd or even using while loop
Lab Sheet No:12
Date: 2nd jan,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n>0)
    {
        if(n%2==0)
        {
            printf("%d is even",n);
            n=0;
        }
        else
        {
            printf("%d is odd",n);
            n=0;
        }
    }
    getch();
    return 0;
}
