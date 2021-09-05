#include<stdio.h>

void
main ()
{
  int firstnumber,secondnumber,sum,num,counter=0;
  printf("enter the number of terms ");
   scanf("%d",&num);
  
  printf ("enter firstnumber ");
   scanf ("%d", &firstnumber);
   
   printf("enter second number ");
    scanf("%d",&secondnumber);
   
   printf("the fibonnacci series is going to start from %d,%d\n",firstnumber,secondnumber); 
   
   while(counter<num)
   {
    sum=firstnumber+secondnumber;
    printf("%d",sum);
    firstnumber=secondnumber;
    secondnumber=sum;
    counter++;
   }    
}
