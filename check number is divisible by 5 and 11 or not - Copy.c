/*
Name:Rohit Maharjan
subject:Programming Fundamental
Program: WAP to print whether the number is divisible by 5 and 11 or not
Roll No:26
Lab No:11
Date:19 December,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    (x%5==0 && x%11==0)?printf("The number is divisible by 5 and 11",x):printf("The number is not divisible by 5 and 11",x);
    getch();
    return 0;
}
