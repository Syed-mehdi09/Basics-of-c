#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    int flag=0;
    printf("enter the world:");
    scanf("%s",a);
    int aSize=strlen(a);
    for(int i= 0;i<aSize;i++){
        if (a[i]!=a[aSize-i-1])
        {
             flag=1;
            break;
        }
        }
        if (flag)
        {
            printf("not palindrome");
        }
        else{
            printf("palindrome");
        }
        return 0;
}