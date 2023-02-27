#include <stdio.h>

void count(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int num1=num;
    int count=0;
    while(num>0){
        num/=10;
        count++;
    }
    printf("%d is the count of number.",count);
}
int main(){
    count();
    return 0;
}