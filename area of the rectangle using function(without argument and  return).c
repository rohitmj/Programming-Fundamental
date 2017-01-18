/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no: 30
Program : Write a program to print the area of the rectangle using function(without argument and  return)
Lab Sheet No:18
Date: 18th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int area();
int main()
{
    area();
    return 0;
}
int area()
{
    int l,b,area;
    printf("Enter the length\n");
    scanf("%d",&l);
    printf("Enter the breadth\n");
    scanf("%d",&b);
    area = l * b;
    printf("The area of the rectangle is %d",area);
    return area;
}
