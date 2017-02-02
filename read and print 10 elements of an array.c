/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Programme : WAP to read and print 10 elements of an array
Lab Sheet No:22
Date: 29th jan,2017
*/
#include<stdio.h>
int main()
{
	int i,element[10];
	for(i=1;i<=10;i++)
	{
		printf("Enter the elements %d:",i);
		scanf("%d",&element[i]);
	}
	printf("All the arrays are:\n");
	for(i=1;i<=10;i++)
	{
	printf("Elements%d: %d\n",i,element[i]);
	}
	return 0;
}