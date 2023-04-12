// Create a student structure of name regno and three subjects marks. 
// Write a function calculate which calculates percantage and display the percantage with students details.


// NOT WORKING (*):
#include<stdio.h>
struct student{
    char name[20];
    int regno;
    int marks[3];
};

int main(){
    struct student s;
    scanf("%s",&s.name);
    scanf("%d",&s.regno);
    printf("Enter the marks: ");
    int sum,avg,i;
    for(i=0;i<3;i++){
        scanf("%d ",s.marks[i]);
    }
    for(i=0;i<3;i++){
        sum+=s.marks[i];
    }
    avg=sum/3;

    printf("%s",s.name);
    printf("%d",s.regno);
    for(i=0;i<3;i++){
        printf("%d \n",s.marks[i]);
    }
    printf("%d",avg);
}
