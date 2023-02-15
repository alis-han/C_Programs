// WAP to print multiplication table of a particular table using while loop

#include<stdio.h>

void main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    int i=1;
    while(i<=10){
        printf("%d * %d = %d \n",a,i,a*i);
        i+=1;
    }
}

