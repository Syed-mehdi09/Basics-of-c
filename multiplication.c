#include<stdio.h>
#include<conio.h>
void main(){
    int i,n;
    printf("enter the table no.:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d\t*\t%d\t=\t%d\n",n,i,n*i);
    }
}

