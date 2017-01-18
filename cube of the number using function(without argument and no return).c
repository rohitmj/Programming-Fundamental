/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no: 30
Program : Write a program to print the cube of the number using function(without argument and no return)
Lab Sheet No:18
Date: 18th jan,2017
*/
#include<stdio.h>
void cube();
int main()
{
    cube();
    return 0;
}
void cube()
{
    int n,result;
    printf("enter the number\n");
    scanf("%d",&n);
    result=n*n*n;
    printf("the cube of number is:%d",result);
}
