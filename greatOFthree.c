//Write the C program to find greatest of three number

#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter values for a ,b ,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is greatest of three.",a);
    }
    else if(b>a && b>c){
        printf("%d is greatest of three.",b);
    }
    else{
        printf("%d is greatest of three.",c);
    }
}