/* To define a structure DISTANCE and a user-defined function ADDDISTANCE()*/
#include<stdio.h>
struct distance
{
   int kms,meters;
};
struct distance adddistance(struct distance, struct distance);


main()
{
   struct distance d1,d2,d3;
   printf("Enter distance in kms and meters of 1st value:");
   scanf("%d%d",&d1.kms,&d1.meters);
   printf("%d%d",d1.kms,d1.meters);
   printf("\nEnter distance in kms and meters of 2nd value:");
   scanf("%d%d",&d2.kms,&d2.meters);
   d3=adddistance(d1,d2);
   if (d3.meters>1000)
	   d3.meters=d3.meters-1000;
           d3.kms++;
   printf("\nAddition result=%d kms %d meters\n",d3.kms,d3.meters);
}
 
struct distance adddistance(struct distance d1,struct distance d2)
{
   struct distance d3;
   d3.kms=d1.kms+d2.kms;
   d3.meters=d1.meters+d2.meters;
   return d3;
}
      
