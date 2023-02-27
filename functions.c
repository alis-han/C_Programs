// Create two User defined functions , one function to check whether given number is positive or negative and if the value is positive
// then return value to another function to check whether even or not and print it.

#include<stdio.h>

int positive(int num){
    if(num>=0){
        printf("Number is positive.");
        evenOrOdd(num);
    }
    else{
        printf("Negative Number.");
    }
}
void evenOrOdd(int num){
    if(num%2==0){
        printf("Even Number.");
    }
    else{
        printf("Odd Number.");
    }
}

void main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    positive(num);
}
