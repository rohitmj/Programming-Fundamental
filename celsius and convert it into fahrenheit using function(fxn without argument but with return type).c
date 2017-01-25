/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:30
Programe : WAP to enter temperature in celsius and convert it into fahrenheit using function(fxn without argument but with return type)
Lab Sheet No: 21
Date: 25 Jan,2017
*/
#include<stdio.h>
float temp();
int main()
{
	float res;
	res=temp();
	printf("the temperature in fahrenheit is %f\n",res);
	return 0;
}
float temp()
{
	float i,con;
	printf("Enter the temp in celsius\n");
	scanf("%f",&i);
	con = (i*1.8)+32;
	return con;
}