#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b,i=1,hcf;
    printf("enter the two nos. for finding HCF:");
    scanf("%d%d",&a,&b);
    
    //USING FOR LOOP
    for ( ; i<=a || i<=b; i++)
    {
        if (a%i==0 && b%i==0)
        {
        hcf=i;
    
        }
    }
    printf("\nthe HCF, using for loop is:%d",hcf);
   
   //USING WHILE LOOP
    while (i<=a || i<=b )
    {
        if (a%i==0 && b%i==0)
        {
            hcf=i;
        }
        i++;
    }
    printf("\nthe HCF, using while loop is:%d",hcf);
 
    //USING DO-WHILE LOOP
    do
    {
        if (a%i==0 && b%i==0)
        {
            hcf=i;
        }
        
        i++;
     } while (i<=a || i<=b);
    printf("\nthe HCF, using do-while loop is:%d",hcf);
    
    return 0;
}