/* To define a structure COMPLEX,user-defined function addcomplex()*/
#include<stdio.h>
struct complex
{
  int real,imag;
};

struct complex addcomplex(struct complex,struct complex);
int main()
{	
   struct complex C1,C2,C3;
   printf("Enter real and imag part of 1st no:");
   scanf("%d%d",&C1.real,&C1.imag);
   printf("\nEnter real and imag part of 2nd no:");
   scanf("%d%d",&C2.real,&C2.imag);
   C3=addcomplex(C1,C2);
   printf("Addition result=%d+%di\n",C3.real,C3.imag);
}

struct complex addcomplex(struct complex C1,struct complex C2)
{
  struct complex C3;
  C3.real=C1.real+C2.real;
  C3.imag=C1.imag+C2.imag;
  return C3;
}  
