#include<stdio.h>
#include<conio.h>
#include<string.h>
int anagram(char agm[]){
    int n,temp,i,j;
    n=strlen(agm);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if (agm[i]>agm[j])
            {
                temp=agm[i];
                agm[i]=agm[j];
                agm[j]=temp;
            }
            
        }
    }

}
int main(){
    char a[100],b[100];
    printf("enter the first string:");
    gets(a);
    printf("enter the second string:");
    gets(b);
    anagram(a);
    anagram(b);
    if (strcmp(a,b)==0)
    {
        puts("strings are anagram:");
    }
    else{
        puts("strings are not anagram:");
    }
return 0;
}