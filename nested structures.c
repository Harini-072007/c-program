#include<stdio.h>
struct date{
    int day;
    int mon;
    int year;
};
struct student{
int id;
char name[20];
struct date dob;
};
int main(){
   struct student s1={101,"kiran",{15,8,2000}};
   printf("Name:%s\n",s1.name);
   printf("dob:%d-%d-%d\n",s1.dob.day,s1.dob.mon,s1.dob.yr);
   return 0;
}
