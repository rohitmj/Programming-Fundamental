/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no: 30
Program : Write a program to display the following
           111
           222
Lab Sheet No:16
Date: 16th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n=1;
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d",n);

        }
        n++;
        printf("\n");
    }
    getch();
    return 0;

}
