#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b,i;
    printf("enter the two nos. for finding lcm:");
    scanf("%d%d",&a,&b);
    i=(a>b) ? a:b;
    while (1)
    {
        if((i%a==0)&&(i%b==0)){
            printf("the LCM, using while loop is:%d",i);
            break;
        }
        ++i;
    }
    for(1;;i++){
        if(i%a==0  && i%b==0){
            printf("\nthe LCM, using for loop is:%d",i);
            break;
        }
    }
    do
    {
        if (i%a==0 && i%b==0)
        {
            printf("\nthe LCM, using do-while loop is:%d ",i);
            break;
        }
        
        i++;
    } while (1);
    
    return 0;
}