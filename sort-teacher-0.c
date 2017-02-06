/**
*This program will sort the teacher by department.
*/

#include<stdio.h>
#include<string.h>
#define SIZE 3

void sort(struct Teacher *t);

struct Teacher
{
    char name[100];
    char depart[100];
};

int main(void)
{
    //type declaration
    int i;
    
    struct Teacher t[SIZE];
    
    //input
    for(i = 0; i < SIZE; i++)
    {
        printf("Enter name: ");
        scanf("%[^\n]s", t[i].name);
        printf("Enter department: ");
        scanf("%[^\n]s", t[i].depart);
    }
    
    //sort
    sort(t);
    
    //display sorted array
    printf("***Sorted array***");
    for(i = 0; i < SIZE; i++)
    {
        printf("Name: %s\n", t[i].name);
        printf("Department: %s\n", t[i].depart);
    }
}

void sort(struct Teacher *t)
{
    //type declaration
    struct Teacher temp;
    int i, j;
    
    //sort the array
    for(i = 0; i < SIZE - 1; i++)
    {
        for(j = i + 1; j < SIZE; j++)
        {
            if(strcmp(*t + i -> depart, *t + j -> depart) > 0)
            {
                temp = *t + i
                (*t + i) = (*t + j)
                (*t + j) = temp
            }
        }
    }
    
}
