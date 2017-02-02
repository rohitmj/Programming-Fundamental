/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Programme : WAP to find the fibonacci series upto nth terms using recursive function
Lab Sheet No:22
Date: 29th jan,2017
*/
#include<stdio.h>
int fib(int n);
int main()
{
	int a,i;
	printf("Enter a number\n");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("%d\t",fib(i));
	}
	return 0;
}
int fib(int n)
{
	if(n<2)
	return n;
	else
	{
		return(fib(n-1)+fib(n-2));
	}
}