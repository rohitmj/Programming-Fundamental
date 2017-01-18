/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no: 30
Program : Write a program to print the area of the circle using function(with argument and  no return)
Lab Sheet No:18
Date: 18th jan,2017
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
#include<math.h>
void area(int e);
int main()
{
    int r,a;
    printf("Enter the radius\n");
    scanf("%d",&r);
    area(r);
    return 0;
}
void area(int e)
{
    float a,r;
    a=PI*pow(e,2);
    printf("The area of the radius is %f",a);
}
