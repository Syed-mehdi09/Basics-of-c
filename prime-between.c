#include<stdio.h>
#include<conio.h>
int main(){
    int n,a,b,i,count1=0,count2=0;
    printf("enter the 1st no. of the range:");
    scanf("%d",&n);
    printf("enter the 2nd no. of the range:");
    scanf("%d",&b);
    for (a= n; a <=b; a++)
    {
        for ( i = 2; i < a; i++)
        {
            if (a%i==0)
            { 
                count1++;
                break;
            }
            
        }
        if (i==a)
        {
            count2++;
            printf("%d\t",a);
        }
        
    }
    printf("\nthere are %d prime no. between %d and %d :",count2,n,b);
    printf("\nthere are %d composite no. between %d and %d :",count1,n,b);
    return 0;
}