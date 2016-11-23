/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:23
Programe : Write a program to read temperature in Fahrenheit and convert it into centigrade
Lab Sheet No:04
Date:23 November,2016
*/
#include<stdio.h>
int main(){
float F,C;
printf("Enter the temperature in Fahrenheit:\n");
scanf("%f",&F);
C=0.56*(F-32);
printf("The Centrigrade of given temperature is:%f",C);
return 0;}

