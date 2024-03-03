#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the first no.:");
    scanf("%d",&a);
    printf("enter the second no.:");
    scanf("%d",&b);
    printf("enter the third no.:");
    scanf("%d",&c);
    if(a>b & a>c){
        printf("first no. is the biggest");
    }
    else if(b>a & b>c){
       printf("second no. is the biggest  ");
    }
    else{
        printf("third no is the biggest");
    }
}