#include<stdio.h>
#include<stdlib.h>


void main()
{
	int size;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	
	int *arr=(int *)malloc(size*sizeof(int));
	
	//Take Input
	for(int i=0;i<size;i++)
		scanf("%d",(arr+i));
	
	//Print
	
	for(int i=0;i<size;i++)
		printf("%d ",*(arr+i));
	
	//Increase the size
	
	int nsize=size*2;
	
	arr=(int *)realloc(arr,nsize);
	
	//(cast *)realloc(ptr,newcapacity)
	
	if(arr==NULL){
		printf("ERROR");
	    exit(1);
	}
	
	
	printf("Enter the new elements:");
	for(int i=size;i<nsize;i++)
		scanf("%d",(arr+i));
	
	printf("After reallocating the size the new array is:");
	
	//Print
	for(int j=0;j<nsize;j++)
		printf("%d ",*(arr+j));
	
	free(arr);
}
