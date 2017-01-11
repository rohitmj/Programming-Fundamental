/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:
Program : Write a program to
            1)display the result by dividng the number by 10
            2)divide it by another number asked from user
            3)display the remainder by dividing number by 10
Lab Sheet No:15
Date: 11th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{

    int n,div;
    printf("Enter a 4 digit number\n");
    scanf("%d",&n);
    div = (n/10);
    printf("The division of the number is %d\n",div);
    int r,di;
    printf("Enter another number\n");
    scanf("%d",&r);
    di = div/r;
    int rem;
    rem = (di%10);
    printf("The remainder of the given number is %d",rem);
    getch();
    return 0;
}
