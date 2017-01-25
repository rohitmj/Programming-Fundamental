/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:30
Programe : Write a program to enter the two number and find the minimum using function(with no argument and return type)
Lab Sheet No:30
Date: 25 Jan,2017
*/
#include<stdio.h>
float minimum();
int main()
{ 
	float res;
	 res = minimum();
	 printf("%f is minimum\n",res);
	return 0;
}
float minimum()
{
	float a,b;
	printf("Enter the first number\n");
	scanf("%f",&a);
	printf("Enter the second number\n");
	scanf("%f",&b);
	if(a<b)
	{
		return a;
		
	}
	else 
	{
		return b;
	}
}