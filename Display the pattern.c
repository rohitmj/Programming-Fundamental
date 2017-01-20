/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no : 30
Program : Write a c program to display the patterns using if else
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
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{ 
			
		if(i>j)
		{
			printf(" ");
		}
		else
		{
			printf("*");
		
		}

		}
		printf("\n");
	}	
	getch();
	return 0;
}