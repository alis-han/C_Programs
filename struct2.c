#include <stdio.h>
struct emp{
    char name[20];
    int empid;
    float salary;
};

void display(struct emp e){
    printf("%s ",e.name);
    printf("%.f ",e.salary);
    printf("%d",e.empid);
}

int main(){
    struct emp ep;
    scanf("%s",&ep.name);
    scanf("%d",&ep.empid);
    scanf("%f",&ep.salary);
    display(ep);
}


