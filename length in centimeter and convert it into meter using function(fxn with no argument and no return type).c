/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:30
Programe : WAP to enter the length in centimeter and convert it into meter using function(fxn with no argument and no return type)
Lab Sheet No: 21
Date: 25 Jan,2017
*/
#include<stdio.h>
void length();
int main()
{
	length();
	return 0;
}
void length()
{
	float l,con;
	printf("Enter the length in centimeter\n");
	scanf("%f",&l);
	con = l/100;
	printf("The Length in meter is %f\n",con);
}