#include <stdio.h>

void factorial(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            printf("%d ",i);
        }
    }
}
int main(){
    factorial();
    return 0;
}