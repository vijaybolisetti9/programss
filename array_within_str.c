#include<stdio.h>


#include<string.h>


struct student
{

char name[20];
int id;
float marks[5];
};


int main(){
	struct student stu[2];
	int i,j;
	

	
	
	for (i=0;i<2;i++){
		printf("Enter Name id of student %d : \n",i+1);
	
		scanf("%s %d",stu[i].name,&stu[i].id);
		
		for(j=0;j<5;j++){
		printf("Enter marks of subjet %d:\n",j+1);
		
		scanf("%f",&stu[i].marks[j]);
	
	
		}
	}
	
	for (i=0;i<2;i++){
	
	printf("Name and Id of student %d is  %s %d \n",i+1,stu[i].name,stu[i].id);
	
	for (j=0;j<5;j++){
	    printf("stud%d got %f marks in subject %d is:\n",i+1,stu[i].marks[j],j+1);
	
	
	}
	
	
	
	
	}
	}
