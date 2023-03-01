#include<stdio.h>

int greatest(int n1,int n2,int n3){
    if(n1>n2 && n1>n3){
        return n1;
    }
    else if(n2>n1 && n2>n3){
        return n2;
    }
    else{
        return n3;
    }
}

void main(){
    printf("Enter the three Numbers:");
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    printf("Greatest of three numbers is: %d",greatest(n1,n2,n3));
}