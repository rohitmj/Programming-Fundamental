/*
student name: Rohit Maharjan
subject: Computer fundamentals
roll no:
programe : write a c prograam to print the product of two numbers given by the user
date:18 November,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,product;
printf("enter the first number:\n");
scanf("%d",&a);
printf("enter the second number:\n");
scanf("%d",&b);
product=a*b;
printf("the product of two numbers given by the user is:%d\n",product);

getch();
return 0;
}
