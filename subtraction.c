/*
student name: Rohit Maharjan
subject: Computer fundamentals
roll no:
programe : write a c program to print the subtract of two numbers given by the user
date:18 November,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,subtract;
printf("enter the first number:\n");
scanf("%d",&a);
printf("enter the second number:\n");
scanf("%d",&b);
subtract=a-b;
printf("the subtraction of two numbers given by the user is:%d\n",subtract);

getch();
return 0;
}
