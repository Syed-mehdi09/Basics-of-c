#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int n,a,b,c,sum=0;
    printf("enter the no.:");
    scanf("%d",&n);
    a=n;
    while (a!=0)
    {
       b=a%10;
       c=b*b*b;
       sum=sum+c;
       a/=10;

    }
       if (sum==n)
       {
        printf("the no. is armstrong:");
       }
       else{
        printf("the no. is not armstrong:");
       }
    
    
}