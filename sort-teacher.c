//wap to define a structure called teacher with suitable attributes and reads the data of five teachers. 
//your program should display the records in ascending order according to the name of the department of the teacher.
//YOU ARE REQUIRED TOUSE POINTER IN THE PROGRM

#include<stdio.h>
#include<string.h>//

#define SIZE 2//

struct teacher{
	char name[50];
	char depart[50];
};//

struct teacher sort(struct teacher []);//
struct teacher input(struct teacher *);//

int main(void)
{	
	
	struct teacher t[SIZE];
	
	int i;
	input(t);
	sort(t);
	
	printf("Thus the sorted list is : \n");
	
	for (i=0;i<SIZE;i++)
	{
		printf("%s  %s \n",t[i].name,t[i].depart);
	}
}

struct teacher input(struct teacher *ptr)
{
	int j;
	
	for (j=0;j<SIZE;j++)
	{
		printf("enter the name :");
		scanf(" %[^\n]s",ptr->name);
		printf("enter the department :");
		scanf(" %[^\n]s",ptr->depart);
		ptr++;
	}
}

//HOW TO USE A POINTER RELATING TO STRUCTURE IN THIS FUNCTION??

struct teacher sort(struct teacher t[])
{	
	struct teacher temp;
	int i,j;
	
	for(i=0;i<SIZE;i++)
	{
		for(j=i+1;j<SIZE;j++)
		{
			if ( strcmp(t[i].depart,t[j].depart) > 0)
			{
				temp=t[i];
				t[i]=t[j];
				t[j]=temp;
			}
		}
	}
}

