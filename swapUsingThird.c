#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("VAlues of Swapping of a and b is %d and %d respectively.",a,b);
}