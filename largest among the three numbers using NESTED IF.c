/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:26
Program : Write a program to find the largest among the three numbers using NESTED IF
Lab Sheet No:
Date: 3rd Jan,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the First Number\n");
    scanf("%d",&a);
    printf("Enter the Second Number\n");
    scanf("%d",&b);
    printf("Enter the Third Number\n");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the largest",a);
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            printf("%d is  the largest",b);
        }
    }
    else
    {
        printf("%d is the Largest",c);
    }
    getch();
    return 0;
}
