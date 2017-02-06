/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Program : Write a program to use a pointer to find a memory address of  variable
            Pointer:It is a varaible that stores memory address of another varaible
Lab Sheet No:15
Date: 6th Feb,2017
*/
#include<stdio.h>
int main()
{
    int x=5;
    int *p;
    p=&x;
    printf("The memory address of x variable is %u",p);
    return 0;
}
