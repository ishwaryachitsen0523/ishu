#include<stdio.h>
#include<conio.h>
void main()
{
char d;
clrscr();
printf("enter the char");
scanf("%c",&d);
if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u')
printf("its a vowel");
else
printf("its a consonant");
getch();
}
