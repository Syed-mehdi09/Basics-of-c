#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the first no.");
    scanf("%d",&a);
    printf("enter the second no.");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("the swap nos. are:\n");
    printf("the value of a is:%d\n",a);
    printf("the value of b is: %d",b);
}