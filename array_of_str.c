#include<stdio.h>


#include<string.h>


struct student
{

char name[20];
int id;
float marks;
};


int main(){
	struct student stu[2];
	int i,j;
	

	
	
	for (i=0;i<2;i++){
		printf("Enter Name id and marks of student %d : \n",i+1);
	
	scanf("%s %d %f",stu[i].name,&stu[i].id,&stu[i].marks);
	
	
	}
	
	
	for (i=0;i<2;i++){
	
	printf("%s %d %f\n",stu[i].name,stu[i].id,stu[i].marks);
	
	
	}
	
	
	
	
	}
