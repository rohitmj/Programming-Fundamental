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
int a,b,A,S,M,D,Mo;
printf("Enter the first number:\n");
scanf("%d",&a);
printf("Enter the second number:\n");
scanf("%d",&b);
A=a+b;
printf("Addition of two number is:%d\n",A);
S=a-b;
printf("Subtraction of two number is:%d\n",S);
M=a*b;
printf("Multiplication of two number is:%d\n",M);
D=a/b;
printf("Division of two number is:%d\n",D);
Mo=(a%b);
printf("Modulus of two number is:%d\n",Mo);
getch();
return 0;
}
