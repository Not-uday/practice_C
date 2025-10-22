

// #include<stdio.h>
// int main(){
//     int a,b;
//     a=22,b=33;
//     printf("before swapping a=%d b=%d\n",a,b);
//     a=a+b;  //a=55 (22+33)
//     b=a-b;  //b=22 (55-33)
//     a=a-b;  //a=33 (55-22)
//     printf("after swapping a=%d b=%d",a,b);
// }



// #include<stdio.h>
// void swap_xor(int *a, int *b) {
//     *a = *a ^ *b;  // a becomes a ^ b
//     *b = *a ^ *b;  // b becomes (a ^ b) ^ b, which resolves to a
//     *a = *a ^ *b;  // a becomes (a ^ b) ^ a, which resolves to b
// }
// int main(){
//     int a,b;
//     a=22,b=33;
//     printf("before swapping a=%d b=%d\n",a,b);
//     swap_xor(&a, &b);
//     printf("after swapping a=%d b=%d",a,b);
// }

#include <stdio.h>
int main(){
    int a,b;
    a=22,b=31;
    printf("before swapping a=%d b=%d\n",a,b);
    a=a*b;  //a=682 (22*31)
    b=a/b;  //b=22 (682/31)
    a=a/b;  //a=31 (682/22)
    printf("after swapping a=%d b=%d",a,b);
}
