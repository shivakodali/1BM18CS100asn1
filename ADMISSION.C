#include<stdio.h>
#include<conio.h>
struct stud
{
int studid;
int age;
int marks;
}
s1;
int main()
{
clrscr();
printf("enter the student ID:");
scanf("%d",&s1.studid);
printf("enter the age of the student:");
scanf("%d",&s1.age);
if
(s1.marks>=0 && s1.marks<=100)
{
printf("enter the marks of the student:");
scanf("%d",&s1.marks);
}
if
(s1.age<=20 &&s1.marks>=65)
printf("the student is eligible for admission");
else
printf(" student not eligible");
getch();
return 0;
}
