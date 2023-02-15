#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter values for a ,b ,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        if(b>c){
            printf("B is second greatest");
        }
        else{
            printf("C is second greatest");
        }
    }
    else if(b>a && b>c){
        if(a>c){
            printf("A is second greatest");
        }
        else{
            printf("C is second greatest");
        }
    }
    else{
        if(a>b){
            printf("A is second greatest");
        }
        else{
            printf("B is second greatest");
        }
    }
}