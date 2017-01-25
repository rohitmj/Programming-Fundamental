/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:30
Programe : WAP to check a number is even or odd using function(fxn with argument and return type)
Lab Sheet No:30
Date: 25 Jan,2017
*/
#include<stdio.h>
int check(int f);
int main()
{
	int n,res;
	printf("Enter the number\n");
	scanf("%d",&n);
	res=check(n);
	if(res==0)
	{
		printf("%d is even\n",n);
	}
	else
	{
		printf("%d is odd\n",n);
	}
}
int check(int f)
{
	if(f%2==0)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}