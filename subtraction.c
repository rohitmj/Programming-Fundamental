/*
student name: Rohit Maharjan
subject: Computer fundamentals
roll no:
programe : Write a c program to print the subtract of two numbers given by the user
date:18 November,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,subtract;
printf("Enter the first number:\n");
scanf("%d",&a);
printf("Enter the second number:\n");
scanf("%d",&b);
subtract=a-b;
printf("The subtraction of two numbers given by the user is:%d\n",subtract);
getch();
return 0;
}
