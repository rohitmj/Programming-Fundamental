/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:30
Programe : Write a program to print the armstrong number from 1 to 1000
Lab Sheet No:w0
Date: 23 Jan,2016
*/
#include<stdio.h>
int main()
{
	int i,num=0,r,sum=0;
	for(i=1;i<=1000;i++)
	{
		num=i;
		sum=0;
		while(num>0)
		{
			r=num%10;
			sum=sum+(r*r*r);
			num=num/10;
		}
		if(i==sum)
		{
			printf("%d \n",i);
		}
	}
	return 0;
}
