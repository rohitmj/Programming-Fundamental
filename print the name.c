/*
student name : Rohit Maharjan
subject : Programming Fundamental
roll no :23
sheet no :1
program : Write a c program to print name asked from the user
date : 16 November 2016
*/
#include<stdio.h>
#include<conio.h>
int main (){
char name[5];
printf("What is your name\n");
scanf("%s",&name);
printf("My name is:%s",name);
getch();
return 0;
}
