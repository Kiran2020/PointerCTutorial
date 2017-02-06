#include<stdio.h>
#define SIZE 3

struct Student
{
    int roll;
    int registration_num;
};

void sort(struct Student *student);

int main(void)
{
    
    struct Student s[SIZE];
    
    struct Student *ptr;

    for(int i = 0; i < SIZE; i++)
    {
        ptr = &s[i];

        printf("Enter Roll:");
        scanf("%d", &(ptr->roll));

        printf("Enter Registration: ");
        scanf("%d", &(ptr->registration_num));
    }

    // sort 
    sort(s);
    

    for(int i = 0; i < SIZE; i++)
    {
        ptr = &s[i];

        printf("Student %d\n", i+1);
        printf("Roll No. : %d\n", ptr->roll);
        printf("Registration: %d\n", ptr->registration_num);
    }
}

void sort(struct Student *student)
{
    //type declaration
    int i, j;
    struct Student temp;
    
    //sort the array
    for(i = 0; i < SIZE - 1; i++)
    {
        for(j = i + 1; j < SIZE; j++)
        {
            if((student + i) -> roll > (student + j) -> roll)
            {
                temp = *(student + i);
                *(student + i) = *(student + j);
                *(student + j) = temp; 
            }
        }
    }
    
}