#include<stdio.h>
void main(){
    int i,n,a=0,b=1;
    int fib=a+b;
printf("enter the no. upto which u want the series:");
scanf("%d",&n);
printf("the fibonacci series is:\n");
printf("%d\t%d\t",a,b);
for ( i = 3; i <=n; i++)
{
 printf("%d\t",fib);
 a=b;
 b=fib;
 fib=a+b;
}
}