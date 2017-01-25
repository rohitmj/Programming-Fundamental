/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:30
Programe : WAP to print fibonacci series upto n terms(fxn with argument but no return type)
Lab Sheet No: 21
Date: 25 Jan,2017
*/
#include<stdio.h>
void fibonacci(int f);
int main()
{
	int a; 
	printf("Enter the terms\n");
	scanf("%d",&a);
	fibonacci(a);
	return 0;
}
void fibonacci(int f)
{
	int i,b=0,c=1,d=1;
	for(i=1;i<=f;i++)
	{
		printf("%d\t",d);
		d = b+c;
		b=c;
		c=d;
		
	}	
}