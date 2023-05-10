#include<stdio.h>
#include<conio.h>

main()
{
   int a=100,b=20,c=40,d=80;
   clrscr();
   if(a>b)
 {
   if(a>c)
   {
    printf("A is maximum");
   }
   else
   {
    printf("C1 is maximum");
   }
 }
   else
 {
  if(b>c)
  {
   printf("B is maximum");
  }
  else
  {
   printf("C2 is maximum");
  }
 }
  if(c>d)
 {
  {
   printf("C3 is maximum");
  }
  {
   printf("D is maximum");
  }
 }
   getch();
}

