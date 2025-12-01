#include<stdio.h>
struct Student{
int id;
char name[20];
float marks;
};
int main(){
struct Student S1={101,"priya",89,5};
printf("ID:%d\n",S1.id);
printf("Name:%s\n",S1.name);
printf("Marks:2f\n",S1.marks);
return 0;
}

