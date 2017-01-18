/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no: 30
Program : Write a program to print the diameter,circumference,area of the circle using function(with argument and no return)
Lab Sheet No:18
Date: 18th jan,2017
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
#include<math.h>
void diameter(int e);
void circumference(int f);
void area(int g);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    diameter(n);
    circumference(n);
    area(n);
    return 0;
}
void diameter(int e)
{
    int diameter;
    diameter = e/2;
    printf("The diameter of the circle is %d\n",diameter);
}
void circumference(int f)
{
    float circumference;
    circumference = PI*pow(f,2);
    printf("The circumference of the circle is %f\n",circumference);
}
void area(int g)
{
    float area;
    area = 2*PI*g;
    printf("The area of the circle is %f\n",area);
}
