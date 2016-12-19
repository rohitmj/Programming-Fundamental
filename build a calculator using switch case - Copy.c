/*
Name:Rohit Maharjan
subject:Programming Fundamental
Program: WAP to build a simple calculator using switch case
Roll No:26
Lab No:11
Date:19 December,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,ADD,SUB,MULT,DIV,EXIT;
    printf("\t CALCULATOR \n");
    printf("1.ADD\n");
    printf("2.SUBTRACTION\n");
    printf("3.MULTIPLICATION\n");
    printf("4.DIVISION\n");
    printf("5.EXIT\n");
    printf("Choose any one:\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("Enter the first number\n");
        scanf("%d",&a);
        printf("Enter the second number\n");
        scanf("%d",&b);
        ADD=a+b;
        printf("The addition of two number are %d",ADD);
        break;


        case 2:
        printf("Enter the first number\n");
        scanf("%d",&a);
        printf("Enter the second number\n");
        scanf("%d",&b);
        SUB=a-b;
        printf("The Subtraction of two number are %d",SUB);
        break;


        case 3:
        printf("Enter the first number\n");
        scanf("%d",&a);
        printf("Enter the second number\n");
        scanf("%d",&b);
        MULT=a*b;
        printf("The Multiplication of two number are %d",MULT);
        break;

        case 4:
        printf("Enter the first number\n");
        scanf("%d",&a);
        printf("Enter the second number\n");
        scanf("%d",&b);
        DIV=a/b;
        printf("The Division of two number are %d",DIV);
        break;

        case 5:
        exit(0);
         break;

        default:
        printf("THANK YOUR FOR VISITING");
        }
        getch();
        return 0;
}
