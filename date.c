#include<stdio.h>
#include<conio.h>
#include<time.h>
int main(){
    time_t tp;
    time(&tp);
    printf("current date and time is : %s",ctime(&tp));
     
    // DATE IN DD-MM-YYYY FORMAT
    time_t t;
    t=time(NULL);
    struct tm tm= *localtime(&t);
    printf("current date  is: %d-%d-%d",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900);
    printf("\ncurrent time is : %d-%d-%d",tm.tm_hour,tm.tm_min,tm.tm_sec);
    getch();
    return 0;
    
    
}