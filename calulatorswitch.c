

#include <stdio.h>
int main(){
    float n1;
    scanf("%f",&n1);
    char op;
    scanf("%c",&op);
    float n2;
    scanf("%f",&n2);
    switch(op){
        case '+':
            printf("%f",n1+n2);
            break;
        case '-':
            printf("%f",n1-n2);
            break;
        case '*':
            printf("%f",n1*n2);
            break;
        case '/':
            printf("%f",n1/n2);
            break;
        default:
            printf("invalid operation");
            break;
    }
}

// #include <stdio.h>
// int main(){
//     int a,b,ch;
//     printf("enter two no. :");
//     scanf("%d%d",&a,&b);
//     printf("choice 1 = +\n");
//     printf("choice 2 = -\n");
//     printf("choice 3 = *\n");
//     printf("choice 4 = /\n");
//     printf("enter your choice :");
//     scanf("%d",&ch);
//     switch(ch){
//         case 1 : printf("%d",a+b);
//         break;
//         case 2 : printf("%d",a-b);
//         break;
//         case 3 : printf("%d",a*b);
//         break;
//         case 4 : printf("%d",a/b);
//         break;
//         default : printf("invalid operation");
//         break;
//     }
// }
