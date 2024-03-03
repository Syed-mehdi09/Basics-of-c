#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int a,i,n;
    a=rand()%100+1;
    for ( i=0; n!=a;)
    {
    printf("\nguess my no. between 1-100:");
    scanf("%d",&n);

        if (n==a)
        {
            printf("your guess is correct:%d",a);
      printf("\nyou guessed my no. in %d time:",i)  ;
            break;
        }
        else if (n<a)
        {
            printf("your guess is less than mine:\n");
            i++;
        
        }
        else{
            printf("your guess is more than mine :\n");
            i++;
        
        }
    }
    return 0;
}