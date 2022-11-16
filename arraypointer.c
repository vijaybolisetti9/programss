#include<stdio.h>


#include<string.h>


//as array itself is a base adress and in arrays elements are stored in consecutive order ,by increasing the pointer variable (as base type of pointer is int it access four bytes of memory from base adress and ptr++ means access memory after four consecutive bytes) we can print all the elements in array.

int main(){
	int a=10,b=5,*ptr,i;
	int array[10]={1,2,3,4,5,6};
	ptr=array;
	for (i=0;i<5;i++){
	
	printf("%d\n",*ptr);
	
	ptr++;
	}
	
	printf("%d\n",*ptr);
	
	
	
	}
