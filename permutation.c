#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b,fact1=1,fact2=1,i,j;
    float permu;
    printf("enter the value of n:");
    scanf("%d",&a);
    printf("enter the value of r:");
    scanf("%d",&b);
    if (a>b)
    { 
        // LOOP FOR n
        for ( i = 1; i <= a; i++)
        {
            fact1=fact1*i;
        }
        printf("\nthe factorial of n is :%d",fact1);

        //LOOP FOR (n-r)
        for (j = 1; j <=(a-b); j++)
        {
            fact2=fact2*j;
        }
        printf("\nthe factorial of (n-r) is :%d",fact2);

         permu=fact1/fact2; 
        printf("\nthe permutation is:%f",permu);
    }
    else{
        printf("the calculation cannot be done:");
    }

}