/*
student name: Rohit Maharjan
subject: Computer fundamentals
roll no:
programe : write a c program to print the simple interest
date:18 November,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
float P,T,R,I;
printf("enter the principle:\n");
scanf("%f",&P);
printf("enter the time:\n");
scanf("%f",&T);
printf("enter the rate:\n");
scanf("%f",&R);
I=P*T*R/100;
printf(" the simple interest is:%f\n",I);
getch();
return 0;
}
