#include<stdio.h>
#include<conio.h>
void main(){
    int n,a,i,sum=0;
    printf("enter the no.");
    scanf("%d",&n);
    for(;n!=0;){
        a=n%10;
        sum=sum*10+a;
        n=n/10;
    }
    printf("the reverse no. is : %d",sum);
    
}