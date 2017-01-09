/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:
Program : Write a program to check whether the character is alphabet or not using ternary operator.
Lab Sheet No:15
Date: 9th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
        int n;
        char c;
        printf("Enter the character\n");
        scanf("%c",&n);
        c=n;
		((c>=65&&c<=90) || (c>=97&&c<=122))?printf("%d is a alphabet",c):printf("%d is not an alphabet",c);
		getch();
		return 0;
}
