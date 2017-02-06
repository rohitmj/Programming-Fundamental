/*
Student name: Rohit Maharjan
Subject: Computer Fundamentals
Roll no:23
Program : WAP to declare a structure with three float values and assign value to them in main method and perform multiplication
            in a function multiply() passing structure data as argument
Lab Sheet No:25
Date: 6th Feb,2017
*/
#include<stdio.h>
void multiply(float a,float b,float c);
struct value
{
    float x;
    float y;
    float z;
};
int main()
{
    struct value mul;
    printf("Enter the three numbers:\n");
    scanf("%f %f %f",&mul.x,&mul.y,&mul.z);
    multiply(mul.x,mul.y,mul.z);
    return 0;
}
void multiply(float a,float b,float c)
{
    float m;
    m=a*b*c;
    printf("The multiplication of three numbers are %f",m);
}
