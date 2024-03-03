#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    double a,b,c,x1,x2,d,rp,ip;
    printf("enter the values of the roots :");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0){
        x1=((-b)+sqrt(d))/2*a;
        x2=((-b)-sqrt(d))/2*a;
        printf("\nthe first root is:%lf",x1);
        printf("\nthe second root is:%lf",x2);
    }
    else if(d<0){
        printf("the roots are imaginery:\n");
        rp=(-b)/2*a;
        ip= sqrt(-d)/(2*a);
        printf("x1=%lf+%lfi and \n x2=%lf-%lfi",rp,ip,rp,ip);
    }
    else{
        x1=(-b)/2*a;
        printf("the root is:%lf",x1);
        }
}           