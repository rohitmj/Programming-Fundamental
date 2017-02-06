/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Program : WAP to create a structure with two integer number and call the structure in main method and add both integer value and display the result
Lab Sheet No:25
Date: 6th Feb,2017
*/
#include<stdio.h>
struct sum
{
    int first_no;
    int second_no;
};
int main()
{
    int total;
    struct sum add;
    printf("Enter the First number:\n");
    scanf("%d",&add.first_no);
    printf("Enter the second number:\n");
    scanf("%d",&add.second_no);
    total=add.first_no+add.second_no;
    printf("The sum of the two integers is %d",total);
    return 0;
}
