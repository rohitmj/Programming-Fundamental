
/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no: 30
Program : Write a program to display the following
            x
            xx
            xxx
            xxxx
            xxxxx
Lab Sheet No:16
Date: 16th jan,2017
*/#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("x");
        }
        printf("\n");
    }
    getch();
    return 0;

}
