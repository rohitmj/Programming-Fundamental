/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Program : Write a c program to print arithmetic operation
Lab Sheet No:04
Date: 25 November,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int a,b,Add,Sub,Multi,Div,Mod;
printf("Enter the first number:\n");
scanf("%d",&a);
printf("Enter the second number:\n");
scanf("%d",&b);
Add=a+b;
printf("Addition of two number is:%d\n",Add);
Sub=a-b;
printf("Subtraction of two number is:%d\n",Sub);
Multi=a*b;
printf("Multiplication of two number is:%d\n",Multi);
Div=a/b;
printf("Division of two number is:%d\n",Div);
Mod=(a%b);
printf("Modulus of two number is:%d\n",Mod);
getch();
return 0;
}
