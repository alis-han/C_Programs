#include<stdio.h>

char words(int num){
    if(num==1){
        printf("ONE");
    }
    else if(num==2){
        printf("TWO");
    }
    else if(num==3){
        printf("THREE");
    }
    else if(num==4){
        printf("FOUR");
    }
    else if(num==5){
        printf("FIVE");
    }
    else if(num==6){
        printf("SIX");
    }
    else if(num==7){
        printf("SEVEN");
    }
    else{
        printf("Wrong Inputs .");
    }
}


void main(){
    int num;
    printf("Enter the number renging from 1 to 7 only: ");
    scanf("%d",&num);
    printf("%s",words(num));
}