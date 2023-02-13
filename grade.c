#include<stdio.h>

void main(){
    int marks=(84+34+97+58+64)/5;
    if(marks>=80){
        printf("A Grade.");
    }
    else if(marks>=60 && marks<=79){
        printf("B Grade.");
    }
    else if(marks>=40 && marks<=59){
        printf(" Grade.");
    }
    else{
        printf("D Grade.");
    }
}