#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,c=0;
    printf("enter the no.:");
    scanf("%d",&n);
    if(n==0 || n==1){
        c=1;
    }
    for ( i = 2; i <=n/2; i++)
    {
        if (n%i==0)
        {
            c=1;
            break;
        }
        
    }
        if (c==0)
        {
            printf("the no. is prime: ");
        }
        else{
            printf("the no. is not prime:");
        }
    
}