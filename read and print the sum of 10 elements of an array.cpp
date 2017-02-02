/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Programme : WAP to read and print the sum of 10 elements of an array
Lab Sheet No:22
Date: 29th jan,2017
*/
#include<stdio.h>
int main()
{
	int i,a=0,elements[10];
	for(i=0;i<10;i++)
	{
		printf("Enter the elements %d:",i);
		scanf("%d",&elements[i]);
	}
	for(i=0;i<10;i++)
	{
		a=a+elements[i];
	}
	printf("The sum of all the elements of an array are %d\n",a);
	return 0;
}