#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the first no.:");
    scanf("%d",&a);
    printf("enter the second no.:");
    scanf("%d",&b);
    printf("enter the third no.:");
    scanf("%d",&c);
    if(a<b & a<c){
        printf("first no. is the smallest ");
    }
    else if(b<a & b<c){
       printf("second no. is the smallest  ");
    }
    else{
        printf("third no is the smallest");
    }
}