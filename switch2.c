// #include<stdio.h>
// int main(){
//     float h,w,a,b,s;
//     int c;
//     printf("1 for area of triangle\n2 for area of square\n3 for sum of two no.s\n4 for subtraction of two no.s\n5 for multiplication of two no.s\n6 for division of two no.s\n");
//     printf("enter choice : ");
//     scanf("%d",&c);
//     switch(c){
//         case 1:{
//             printf("enter height of triangle :");
//             scanf("%f",&h);
//             printf("enter width of triangle :");
//             scanf("%f",&w);
//             printf("area of triangle is %f",1/2*h*w);
//             break;
//         }
//         case 2:{
//             printf("enter side of square :");
//             scanf("%f",&s);
//             printf("area of square is %f",s*s);
//             break;
//         }
//         case 3 :{
//             printf("enter two no.s : ");
//             scanf("%f%f",&a,&b);
//             printf("sum is %d",a+b);
//             break;
//         }
//         case 4 :{
//             printf("enter two no.s : ");
//             scanf("%f%f",&a,&b);
//             printf("%d",a-b);
//             break;
//         }
//         case 5 :{
//             printf("enter two no.s : ");
//             scanf("%f%f",&a,&b);
//             printf("%d",a*b);
//             break;
//         }
//         case 6 :{
//             printf("enter two no.s : ");
//             scanf("%f%f",&a,&b);
//             printf("%d",a/b);
//             break;
//         }
//         default: printf("invalid operation");
//     }
// }

#include<stdio.h>
int main(){
    float h,w,a,b,s;
    int c;
    printf("1 for area of triangle\n2 for area of square\n3 for sum of two no.s\n4 for subtraction of two no.s\n5 for multiplication of two no.s\n6 for division of two no.s\n");
    printf("enter choice : ");
    scanf("%d",&c);
    if(c==1){
            printf("enter height of triangle :");
            scanf("%f",&h);
            printf("enter width of triangle :");
            scanf("%f",&w);
            printf("area of triangle is %f",0.5*h*w);
        }
    else if(c==2){
            printf("enter side of square :");
            scanf("%f",&s);
            printf("area of square is %f",s*s);
        }
    else if(c==3){
            printf("enter two no.s : ");
            scanf("%f%f",&a,&b);
            printf("sum is %d",a+b);
        }
    else if(c==4){
            printf("enter two no.s : ");
            scanf("%f%f",&a,&b);
            printf("%d",a-b);
        }
    else if(c==5){
            printf("enter two no.s : ");
            scanf("%f%f",&a,&b);
            printf("%d",a*b);
        }
    else if(c==6){
            printf("enter two no.s : ");
            scanf("%f%f",&a,&b);
            printf("%d",a/b);
        }
    else printf("invalid operation");
}