#include<stdio.h>
void main (){
    int n,i,fact=1;
    printf("enter the no. upto which u want factorial :");
    scanf("%d",&n);
    printf("the factorial is:\n");
   for( i = 1; i <= n; i++)
   {
    fact= fact*i;
printf("%d\t",fact);
   }
}