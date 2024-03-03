#include<stdio.h>
#include<string.h>
int main(){
    char ch1[10],ch2[10],con[50];
    int len1,len2;
    printf("enter the words: ");
    scanf("%s",ch1);
    printf("enter the words: ");
    scanf("%s",ch2);
    len1=strlen(ch1);
    len2=strlen(ch2);
    if(len1>10 || len2>10){
        printf("please enter less than 10 words:");
    }
    else{
        strcat(ch1,ch2);
    }
    printf("\n%s",ch1);
}