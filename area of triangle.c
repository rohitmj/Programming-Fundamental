/*
student name: Rohit Maharjan
subject : Programming Fundamentals
roll no:23
sheet :2
program : Write a program to print the area of triangle
date: 16 November 2016
*/

#include<stdio.h>
#include<conio.h>
int main(){
int a,b,area;
printf("Enter the base:\n",a);
scanf("%d",&a);
printf("Enter the height:\n",b);
scanf("%d",&b);
area=0.5*a*b;
printf("Area of triangle is:%d\n",area);
getch();
return 0;
}
