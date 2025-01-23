#include<stdio.h>  
#include <string.h>  
struct emp
    {
        char name[10];
        int empid;
        int age;
    };
int main(){
    struct emp e1;
    strcpy(e1.name,"Het");
    e1.empid=201;
    e1.age=30;
    struct emp *ptr=&e1;
    printf("%d",ptr->age);

}
