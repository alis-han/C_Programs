#include<stdio.h>
union number{
    int a;
    char name[20];
    float y;
};
int main(){
    union number n;
    printf("%d",sizeof(n)); 
    // Highest memory is allocated not each of them.here it would be 20 not 20+4 like in case of struct.
    n.a=34;
    n.y=34.68;
    printf("%d %f",n.a,n.y);
    // HERE y will replace x as they have same memory in union data type.
}