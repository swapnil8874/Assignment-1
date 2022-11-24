//WAP a program to print date take as an input DD/MM/YYYY
#include<stdio.h>
int main()
{
   int day,month,year;
   printf("ENTER THE DATE AS GIVEN FORMAT DD/MM/YYYY");
   scanf("%d/%d/%d",&day,&month,&year);
   printf("DAY-%d , MONTH-%d , YEAR-%d",day,month,year);
}