/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:30
Programe : WAP to enter P,T,R and calculate compound interest using function(fxn with argument and with return type)
Lab Sheet No: 21
Date: 25 Jan,2017
*/
#include<stdio.h>
float interest(float P,float T,float R);
int main()
{
	float a,b,c,res;
	printf("Enter the values of P,T,R\n");
	scanf("%f %f %f",&a,&b,&c);
	interest(a,b,c);
	res=interest(a,b,c);
	printf("The compound interest is %f\n",res);
	return 0;
}
float interest(float P,float T,float R)
{
	float i;
 	i = (P*T*R)/100;
 	return i;
}