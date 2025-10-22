//type casting or type conversion

//this is integer to character type conversion
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter no. :");
//     scanf("%d",&n);
//     char ch=(char)n;
//     printf("character is %c",ch);
// }

//this is character to integer type conversion
#include <stdio.h>
int main(){
    char op;
    printf("enter character :");
    scanf("%c",&op);
    int x=(int)op;
    printf("integer is %d",x);
}