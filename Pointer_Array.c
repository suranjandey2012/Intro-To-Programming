#include<stdio.h>


void readarray(int *arr,int *n)
{
	for(int i=0;i<*n;i++)
		scanf("%d",arr+i);
	
}

void printarray(int *arr,int *n)
{
	for(int j=0;j<*n;j++)
		printf("%d ",*(arr+j));
}


int *findlargest(int *arr,int *n)
{
   static int *l;
   l=arr;
   for(int i=0;i<*n;i++)
   {
     if(*(arr+i)>*l)
		 *l=*(arr+i);
   }
   return l;
}


void main()
{
  int num;	
  scanf("%d",&num);
  int *n=&num;
  int array[*n];
  
  
  
  readarray(array,n);
  printarray(array,n);
  
  int *largest;
  
  largest=findlargest(array,n);
  
  printf("\n%d",*largest);	
   
   /*int arr[]={1,2,3,4,5,6,7};
   
   for(int i=0;i<7;i++)
	   printf("%d ",*(arr+i));*/
}