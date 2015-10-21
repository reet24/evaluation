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
int displaydata()
{
  printf("\nPersonal Details entered are:-\n");
  printf("\nName:- %s %s:- ",fname,lname);
  printf("\nAdreess is:- %s",add);
  printf("\nCourse Name %s :- ",course);
  printf("\nPhone number is:- %d",num);
  printf("\nregistration Number :- %d:- ",reg);
}
}
void main()
{
clrscr();
printf("***Personal Details***\n");
pd obj=new pd();
obj.inputdata();
obj.displaydata();
getch();
}
