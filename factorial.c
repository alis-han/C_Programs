#include<stdio.h>

void main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    int fact=1;
    for(int i=a;i>0;i--){
        fact*=i;
    }
    printf("%d",fact);
}