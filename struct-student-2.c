#include <stdio.h>
#define SIZE 3

// define struct
struct Student
{
	int roll;
	int registration_num;
};

void sort(struct Student *student);

int main(void)
{
	// declare array of stuct
	struct Student s[SIZE];

	// declare pointer variable 
	struct Student *ptr;

	//populate
	int i;
	for(i = 0; i < SIZE; i++)
	{
		ptr = &s[i];

		printf("Enter roll:");
		scanf("%d", &(ptr->roll));

		printf("Enter registration_num:");
		scanf("%d", &(ptr->registration_num));
	}

	// sort 
	sort(s);

	// display
	for(i = 0; i < SIZE; i++)
	{
		ptr = &s[i];

		printf("Student %d\n", i + 1);
		printf("Roll: %d\n", ptr->roll);
		printf("Registration_num: %d\n", ptr->registration_num);
	}
}

void sort(struct Student *student)
{
	int i, j;
	struct Student temp;

	for(i = 0; i < SIZE; i++)
	{
		for(j = i + 1; j < SIZE; j++)
		{
			if((student + i)->roll > (student + j)->roll)
			{
				temp = *(student + i);
				*(student + i) = *(student + j);
				*(student + j) = temp;
			}
		}
	}
}