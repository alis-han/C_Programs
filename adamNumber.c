// MAYBE WRONG not checked...

#include <stdio.h>

int adam(int num){
    int org=reverse(num*num);
    int rev=reverse(num);
    int revv=reverse(rev);
    if(org==revv){
        printf("ADAM NUMBER");
    }
    else{
        printf("NOT AN ADAM NUMBER");
    }
}

int reverse(int num){
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    num = rev;
}


int main(){
    int num;
    printf("Enter the number to check ADAM Number: ");
    scanf("%d",&num);
    printf("%s",adam(num));
}