//---program for swapping using three variable

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter  1st no. : ");
    scanf("%d",&a);
    printf("Enter  2nd no. : ");
    scanf("%d",&b);
    printf("before swapping a = %ld and b = %ld\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swapping a = %ld and b = %ld",a,b);
}