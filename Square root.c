/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Program : Write a program to enter any number and calculate its square root
Lab Sheet No:06
Date:28 November,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float n,sqr;
    printf("Enter the number:\n");
    scanf("%f",&n);
    sqr=pow(n,0.5);
    printf("The Square root of the given number is:%f",sqr);
    getch();
    return 0;
}
