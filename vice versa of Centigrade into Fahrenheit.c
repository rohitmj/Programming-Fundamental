/*
Student name: Rohit Maharjan
Subject: Computer fundamentals
Roll no:23
Program : Write a program to read temperature in Centigrade and convert it into Fahrenheit
Lab Sheet No:04
Date:23 November,2016
*/

#include<stdio.h>

int main(){
    float F,C,E;
    printf("Enter the centigrade:\n");
    scanf("%f",&C);
    E=9*(C+32);
    F=E/5;
    printf("The temperature is:%f",F);
   
    return 0;
}
