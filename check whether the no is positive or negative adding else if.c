/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Program : Write a c program to check whether the number is positive or negative
Lab Sheet No:04
Date: 25 November,2016
*/
#include<stdio.h>
int main(){
int n;
printf("Enter the number:\n");
scanf("%d",&n);
if(n>0)
{
printf("no is positive\n");
}
else if(n<0)
{
printf("no is negative");
}

else
{
printf("no is zero");
}

return 0;}
