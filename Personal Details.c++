#include<stdio.h>
#include<conio.h>
class pd()
{
int num,reg;
string course,fname,lname,add;
int inputdata()
{
printf("\nEnter First Name:- ");
scanf("%s",&fname);
printf("\nEnter Last Name:- ");
scanf("%s",&flname);
printf("\nEnter Address:- ");
scanf("%s",&add);
printf("\nEnter course Name:- ");
scanf("%s",&course);
printf("\nEnter Phone Number:- ");
scanf("%d",&num);
printf("\nEnter Registration Number- ");
scanf("%d",&reg);
}
}
void main()
{
clrscr();
printf("***Personal Details***\n");
pd obj=new pd();
obj.inputdata();
getch();
}
