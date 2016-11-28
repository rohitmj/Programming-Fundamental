/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Program : Write a c program to enter marks of seven subjects and calculate total,average,percentage
Lab Sheet No:06
Date:28 November,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,f,g,total,average,percent;
    printf("Enter the Marks in Computer Architecture:\n");
    scanf("%d",&a);
    printf("Enter the Marks in Computer Fundamentals:\n",b);
    scanf("%d",&b);
    printf("Enter the Marks in Software Engineering:\n",c);
    scanf("%d",&c);
    printf("Enter the Marks in Algebra:\n");
    scanf("%d",&d);
    printf("Enter the Marks in Discrete Maths:\n");
    scanf("%d",&e);
    printf("Enter the Marks in Organization Management:\n");
    scanf("%d",&f);
    printf("Enter the Marks in programming:\n");
    scanf("%d",&g);
    total=a+b+c+d+e+f+g;
    printf("The Total is:%d\n",total);
    average=total*7;
    printf("The Average is:%d\n",average);
    percent=(total*100)/700;
    printf("The Percentage is:%d",percent);
    getch();
    return 0;
}
