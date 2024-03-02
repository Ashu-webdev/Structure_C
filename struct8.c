/* To define a structure TIME and a user define d function ADDTIME()*/
#include<stdio.h>
struct time
{
   int hour,minute,second;
};
struct time addtime(struct time,struct time);

int main()
{
   struct time t1,t2,t3;
   printf("Enter hour,minute and second part of 1st time value:");
   scanf("%d%d%d",&t1.hour,&t1.minute,&t1.second);
   printf("\n Enter hour,minute and second part of 2nd time value:");
   scanf("%d%d%d",&t2.hour,&t2.minute,&t2.second);
   t3=addtime(t1,t2);
   if(t3.minute>60)
	   t3.minute=t3.minute-60;
           t1.hour++;
   if(t3.second>60)
         t3.second=t3.second-60;
         t3.minute++;   
   printf("\n Addition pf time values=%d hours %d minutes %d seconds",t3.hour,t3.minute,t3.second);
}
struct time addtime(struct time t1,struct time t2)
{
   struct time t3;
   t3.hour=t1.hour+t2.hour;
   t3.minute=t1.minute+t2.minute;
   t3.second=t1.second+t2.second;
   return t3;
}
