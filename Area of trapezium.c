/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:23
Programe : Write a c program to print the area of trapezium of triangle
Lab Sheet No:03
Date: November,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a,b;
float h,area;
printf("Enter the fist side:\n");
scanf("%d",&a);
printf("Enter the second side:\n");
scanf("%d",&b);
h=(a+b)/2;
area=0.5*(a+b)*h;
printf("The area of trapezium is:%f",area);
getch();
return 0;}
