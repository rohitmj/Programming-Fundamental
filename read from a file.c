/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Program : Write a program to read from a file
Lab Sheet No:26
Date: 13 feb,2017
*/
#include<stdio.h>
int main()
{
    FILE *fp;
    char data[255];
    fp = fopen("D:/sunway/test.txt","r");
    fgets(data,255,(FILE*)fp);
    printf("%s",data);
    printf("\n");
    fclose(fp);
    return 0;
}
