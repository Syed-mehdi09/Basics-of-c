#include<stdio.h>
#include<math.h>
int main(){
    int rp1,rp2,ip1,ip2,sumrp,sumip;
    printf("enter the real part of the complex no.:");
    scanf("%d",&rp1);
    printf("enter the imaginery part of the complex no.:");
    scanf("%d",&ip1);
     printf("enter the real part of the complex no.:");
    scanf("%d",&rp2);
    printf("enter the imaginery part of the complex no.:");
    scanf("%d",&ip2);
    sumrp=rp1+rp2;
    sumip=ip1+ip2;
    printf("the sum is :%d + %di ",sumrp,sumip);
}