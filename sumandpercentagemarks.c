//---program for sum and percentage of marks of student

#include <stdio.h>
int main(){
    float a,b,c,d,e;
    printf("enter marks of subject 1 : ");
    scanf("%f",&a);
    printf("enter marks of subject 2 : ");
    scanf("%f",&b);
    printf("enter marks of subject 3 : ");
    scanf("%f",&c);
    printf("enter marks of subject 4 : ");
    scanf("%f",&d);
    printf("enter marks of subject 5 : ");
    scanf("%f",&e);
    printf("sum of marks is %f/500\n",a+b+c+d+e);
    printf("percentage obtained : %f%%",(a+b+c+d+e)/5);
}