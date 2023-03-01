#include<stdio.h>

int main(){
    int a=5;
    int *a1;
    a1=&a;
    printf("Value= %d\n",*a1);
    printf("address of a =%d\n",&a);
    printf("value =%d\n",a);
    printf("address =%d",a1);
}

