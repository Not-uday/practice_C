//---program for swapping(bitwise oper) without using math or three variable

#include <stdio.h>
int main(){
    int a,b;
    printf("enter 1st no. : ");
    scanf("%d",&a);
    printf("enter 2nd no. : ");
    scanf("%d",&b);
    printf("before swapping a = %d and b = %d\n",a,b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("after swapping a = %d and b = %d",a,b);
}