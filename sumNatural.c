// User Defined function tp find sum of n natural numbers and return the sum value.

#include<stdio.h>

int main(){
    printf("The Sum of Numbers is %d ",sum());
}

int sum(){
    int num,sum,i;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum+=i;
    }
    return sum;
}
