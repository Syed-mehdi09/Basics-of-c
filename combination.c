#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b,fact1=1,fact2=1,fact3=1,i,j,k;
    float comb;
    printf("enter the value of n:");
    scanf("%d",&a);
    printf("enter the value of r:");
    scanf("%d",&b);
    if (a>=b)
    {
        // LOOP FOR n!
        for ( i = 1; i <= a; i++)
        {
            fact1=fact1*i;
        }
        printf("\nthe factorial of n is :%d",fact1);
        
        // LOOP FOR r!
        for ( k = 1; k<= b; k++)
        {
            fact2=fact2*k;
        }
        printf("\nthe factorial of r is:%d",fact2);

        // LOOP FOR (n-r)!
        for (j = 1; j <=(a-b); j++)
        {
            fact3=fact3*j;
        }
        printf("\nthe factorial of (n-r) is :%d",fact3);

         comb=fact1/(fact2*fact3); 
        printf("\nthe combination is:%f",comb);
    }
    else{
        printf("the calculation cannot be done:");
    }
    return 0;
}