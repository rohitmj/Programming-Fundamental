/*
Name:Rohit Maharjan
subject:Programming Fundamental
Program: WAP to swap the value of two variable without using third variable
Roll No:26
Lab No:11
Date:19 December,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("The value of a and b  is %d and %d before swap\n",a,b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("The value of a and b  is %d and %d after swap",a,b);
    getch();
    return 0;
}
