/*
student name: Rohit Maharjan
subject: Computer fundamentals
roll no:
programe : Write a c program to print the simple interest
date:18 November,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
float P,T,R,I;
printf("Enter the principle:\n");
scanf("%f",&P);
printf("Enter the time:\n");
scanf("%f",&T);
printf("Enter the rate:\n");
scanf("%f",&R);
I=P*T*R/100;
printf("The simple interest is:%f\n",I);
getch();
return 0;
}
