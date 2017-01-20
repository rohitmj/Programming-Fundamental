/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no : 30
Program : Write a c program to display the patterns
						xxxxx
						 xxxx
						  xxx
						   xx 
						    x
Lab Sheet No : 19
Date : 20 jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=5;k>=i;k--)
		{
			printf("x");
		}
		printf("\n");
	}	
	getch();
	return 0;
}