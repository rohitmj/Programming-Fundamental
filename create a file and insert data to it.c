/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Program : Write a program to create a file and insert data to it
Lab Sheet No:26
Date: 13 feb,2017
*/
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("D:/sunway/test.txt","w");
    fprintf(fp,"this data is saved to file\n");
    fputs("this is another line in the file",fp);
    fclose(fp);
    return 0;
}
