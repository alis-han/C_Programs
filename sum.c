// WAP to find sum of n natural numbers.

#include<stdio.h>

void main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    int sum=0;
    int i=1;
    while(i<=a){
        sum+=i;
        i++;
    }
    printf("%d",sum);
}