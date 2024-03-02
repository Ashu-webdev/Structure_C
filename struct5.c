/* To  define structure EMPLOYEE and display details of those employees whose salary is greaer than the average salary*/
#include<stdio.h>
main()
{
   struct Employee 
   {
      char name[20];
      int empid;
      char department[20];
      int age;
      float salary;
   };
   struct Employee e[5];
   int i,sum;
   float avg_salary;
   for(i=0;i<5;i++)
   {
      printf("\n Enter the details of employee %d:",i+1);
      scanf("%s%d%s%d%f",e[i].name,&e[i].empid,e[i].department,&e[i].age,&e[i].salary);
   }
   sum=0;
   for(i=0;i<5;i++)
   {
        sum=sum+e[i].salary;
   }	
	avg_salary=sum/5.0;
	printf("mean salary=%f",avg_salary);
   
   for(i=0;i<5;i++)
   {	   
	if(e[i].salary>avg_salary)
	{
           printf("\n Details of employee %d having salary greater than average salary:",i+1);
           printf("%s\n%d\n%s\n%d\n%f\n",e[i].name,e[i].empid,e[i].department,e[i].age,e[i].salary);
        }
  }	

}   
        	
