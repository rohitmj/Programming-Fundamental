/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Programme : WAP to read and print the total number of odd and even of 10 elements of an array
Lab Sheet No:22
Date: 29th jan,2017
*/
#include<stdio.h>
int main()
{
	int another=0,i,count=0,elements[10];
	for(i=1;i<=10;i++)
	{
		printf("Enter the elements %d:",i);
		scanf("%d",&elements[i]);
	}
	for(i=1;i<=10;i++)
	{
		if(elements[i]%2==0)
		{
			count=count+1;
		}
		if(elements[i]%2==1)
		{
			another=another+1;
		}
	}
	printf("The total of even number of all the elements of an array are %d\n",count);
	printf("The total of odd number of all the elements of an array are %d\n",another);
	return 0;
}