/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no : 30
Program : Write a c program to check the armstrong number
Lab Sheet No : 19
Date : 20 jan,2017
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,rem,i,sum;
	printf("Enter the number\n");
	scanf("%d",&n);
	n=i;
	while(n>0)
	{
		rem = n%10;
		sum = sum + pow(rem,3);
		n = n/10;			
	}
	(i==sum)?printf("The number is Armstrong Number\n"):printf("The number is not Armstrong Number\n");
	getch();
	return 0;	
}