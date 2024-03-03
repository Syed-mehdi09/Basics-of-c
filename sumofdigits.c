#include<stdio.h>
#include<conio.h>
int main(){
    int n,sum=0,rem;
    printf("enter the no. : ");
    scanf("%d",&n);

    //USING FOR LOOP
    for(;n>0;){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("\nthe sum of the digit, using FOR LOOP is: %d",sum);

    //USING WHILE LOOP
    while (n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("\nthe sum of the digits, using WHILE LOOP is: %d ",sum);

    //USING DO-WHILE LOOP
    do
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    } while (n>0);
     printf("\nthe sum of the digits, using D0-WHILE LOOP is: %d ",sum);
}