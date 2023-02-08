// Program to swap the values of two number using third variable.
// #include<stdio.h>
// void main(){
//     int a=5,b=6;
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     printf("%d,%d",a,b);
// }

// Without third variable
#include<stdio.h>
void main(){
    int a=10,b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d,%d",a,b);
}