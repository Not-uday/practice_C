//---program for calculate simple interest and compound interest

#include <stdio.h>
#include <math.h>
int main(){
    float p,r,t,n;
    printf("enter principal amount : ");
    scanf("%f",&p);
    printf("enter rate of interest : ");
    scanf("%f",&r);
    printf("enter time period : ");
    scanf("%f",&t);
    printf("enter n(compounding frequency) : ");
    scanf("%f",&n);
    printf("simple interest is : %f\n",p*r*t/100);
    printf("compound interest is : %f",p*pow((1+r/100*n),n*t));
}