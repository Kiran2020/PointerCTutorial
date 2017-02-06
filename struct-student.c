#include<stdio.h>

int main(void)
{
    struct Student
    {
        int roll;
        int registration_num;
    };
    
    struct Student s1;
    
    struct Student *ptr;
    
    ptr = &s1;
    
    ptr->roll = 1;
    ptr->registration_num = 1234;
    
    printf("Roll: %d\n", (*ptr).roll);
    printf("Roll: %d\n", ptr->roll);
    printf("Registration: %d\n", ptr->registration_num);
}