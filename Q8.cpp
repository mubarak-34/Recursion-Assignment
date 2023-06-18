#include<stdio.h>

int sum=0, rem;

revNumber(int number)
{
   if(number)
   {
      rem=number%10;
      sum=sum*10+rem;
      revNumber(number/10);
   }
   
   else
   {
      return sum;
   }
}

int main(){
   int number,revNumberTotal;
   printf("enter number:");
   scanf("%d",&number);
   revNumberTotal=revNumber(number);
   printf("the number after reverse :%d",revNumberTotal);
   return 0;
}

