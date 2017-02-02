/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Programme : WAP to read and print the greatest among 10 elements of an array
Lab Sheet No:22
Date: 29th jan,2017
*/
#include<stdio.h>
int main()
{
	int i,elements[10],g=0;
	for(i=1;i<=10;i++)
	{
		printf("Enter the elements %d:",i);
		scanf("%d",&elements[i]);
	}
	for(i=1;i<=10;i++)
	{
		if(g<elements[i])
		{
			g= elements[i];
		}
	}
	printf("The greatest among the 10 arrays is %d\n",g);
	return 0;
}
