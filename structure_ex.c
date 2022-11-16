#include<stdio.h>


#include<string.h>


struct student
{

char name[20];
int id;
float marks;
};


int main(){
	struct student s1;
	
	s1.id=5;
	strcpy(s1.name,"vijay");
	s1.marks=90;
	
	struct student s2,s3;
	s2=s1;
	printf("Enter Name id and marks of student3:");
	
	scanf("%s %d %f",s3.name,&s3.id,&s3.marks);
	
	printf("%s %d %f \n",s1.name,s1.id,s1.marks);
	printf("%s %d %f \n",s2.name,s2.id,s2.marks);
	printf("%s %d %f",s3.name,s3.id,s3.marks);
	
	}
