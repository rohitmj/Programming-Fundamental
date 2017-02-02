/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Programme : WAP to find factorial of a given number using recursion function
Lab Sheet No:22
Date: 29th jan,2017
*/
#include<stdio.h>
int fact(int a);
int main()
{
	int n,b;
	printf("Enter the number\n");
	scanf("%d",&n);
	b = fact(n);
	printf("The factorial of the %d is %d\n",n,b);
	return 0;	
}
int fact(int n)
{
	int factorial;
		if(n==1||n==0)
	{
     	return 1;
	}
	else
	{
		factorial = (n*fact(n-1));
		return factorial;
	} 
	
}