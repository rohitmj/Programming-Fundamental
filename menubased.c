/*
Name:Sunita Gosai
Date:28dec,2016
Program:WAP a menu based program
Lab Sheet No:13
Subject:Programming Fundamental
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
char c;
int a,b,d,ASCII;
printf("===MENUBASED===\n");
printf("1.EVEN or odd\n");
printf("2.Prime or not\n");
printf("3.Vowel or consonant\n");
printf("4.Alphabet or not\n");
printf("5.Divisible by 11 and 5\n");
printf("6.exit\n");
printf("Enter a character\n");
scanf("%c",&c);
printf("Choose any one");
scanf("%d",&a);
switch(a)
{
 case 1:

 printf("Enter the first number:\n");
 scanf("%d",&d);
 if(d%2==0)
 {
    printf("The no is even\n");
 }
else
   {printf("The no is odd\n");}
    break;

 case 2:

 printf("Enter the first number:\n");
 scanf("%d",&d);
printf("Error");
 break;

case 3:


if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
 {
     printf("Vowel");
 }
 else
    printf("Consonent");
 break;

  case 4:
ASCII=c;
 if((ASCII>=65 && ASCII<=90) || (ASCII>=97 && ASCII<=122))
		{
			printf("The given input is a alphabet");
		}
		else
			printf("The given input is not an alphabet");
		break;



  case 5:

 printf("Enter the first number:\n");
 scanf("%d",&a);
 if(a%5==0 && a%11==0)
 {
 printf("the no is divisible by 5 and 11");
 }
 else
  printf("the no isn't divisible by 5 and 11");
 break;

 case 6:
    exit(0);
 default:
    printf("THANK U FOR VISITING");
}
return;
}
