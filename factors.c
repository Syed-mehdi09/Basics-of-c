#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,fct;
    printf("enter the no.:");
    scanf("%d",&n);
    printf("the factor of %d are:\n",n);
    for ( i = 1; i <= n/2; i++)
    { 
        if (n%i==0)
        {
        fct=n/i;
        printf("%d\t",fct);
        }
    }
        
}