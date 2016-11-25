/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Program : Write a c program to enter P,T,R and calculate Compound Interest
Lab Sheet No:05
Date:25 November,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float P,T,R,E,F,CI;
    printf("Enter the Principle:\n");
    scanf("%f",&P);
    printf("Enter the Time:\n");
    scanf("%f",&T);
    printf("Enter the Rate:\n");
    scanf("%f",&R);
    F=R/100;
    E=1+F;
    CI=(P*pow(E,T)-1);
    printf("Compound Interest of the program is:%f",CI);
    getch();
    return 0;
}
