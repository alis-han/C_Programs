#include<stdio.h>
int main(){
    int a=9;
    // int c=++a + a++;
    // IN the ++a or --a will assign the value only after all the increment and decrement operation is performed.
    int c=--a - a--;
    printf("%d,%d",c,a);
}