#include<stdio.h>
int main()
{
int dept,sdept;
printf("enter 1 for Cs And 2 for EE:");
scanf("%d",&dept);
switch(dept)
{
case 1:
{
 printf("you are a cs major. \nselect 1 for Cyber,\n 2 for AI,\n 3 for DataSciences:");
 scanf("%d",&sdept);
 switch(sdept)
 {
  case 1: printf("Your sub department is Cyber security"); break;
  case 2: printf("Your sub department AI"); break;
  case 3: printf("your sub dept is Data Science"); break;
 
 }
   } break;
   case 2:
    printf("you are an electrical engineering major:"); break;
   
}
}