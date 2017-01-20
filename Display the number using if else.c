/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no : 30
Program : Write a c program to display the patterns
                        x
                       xx
                      xxx
                     xxxx
                    xxxxx
Lab Sheet No : 19
Date : 20 jan,2017
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(j=5;j>=i;j--)
        {
            printf("x");
        }
        printf("\n");
    }
    getch();
    return 0;
}
