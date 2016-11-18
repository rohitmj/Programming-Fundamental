/*
student name: rohit maharjan
subject : programming fundamentals
roll no:
sheet :
program : write a c program to calculate the area and circumference of circles having radius r. r should be taken from the user
date: 18 November 2016
*/
#include<stdio.h>
#include<conio.h>
int main (){
float r,area,circumference,PI=3.14;
printf("Enter the radius:\n");
scanf("%f",&r);
area=PI*r*r;
circumference=2*PI*r;
printf("Area of the circle is:%f\n",area);
printf("Circumference of the circle is:%f\n",circumference);
getch();
return 0;
}
