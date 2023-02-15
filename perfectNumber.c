// WAP to find whether a given number is perfect number is not.

#include<stdio.h>

void main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    int sum=0;
    int i=1;
    while(i<a){
        if(a%i==0){
            sum+=i;
        }
        i++;
    }
    if(sum==a){
        printf("Perfect_Number");
    }
    else{
        printf("Not a Perfect_Number");
    }
}

