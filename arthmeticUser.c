// WAP to perform arthmetic operations using User Choice...

#include<stdio.h>

void main(){
    char ch;
    int a,b;
    printf("Enter the Choice:");
    scanf("%c",&ch);
    printf("Enter the  values for a and b:");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:
        printf("Invalid ");
        break;
    }
}

