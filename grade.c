#include<stdio.h>

void main(){
    int a,b,c,d,e,avg;
    printf("Enter values for a ,b ,c ,d ,e \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    if(avg>=80){
        printf("A Grade.");
    }
    else if(avg>=60 && avg<=79){
        printf("B Grade.");
    }
    else if(avg>=40 && avg<=59){
        printf(" Grade.");
    }
    else{
        printf("D Grade.");
    }
}