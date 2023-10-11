#include<stdio.h>
#include<stdlib.h>


typedef struct List{
	int size;
	int *arr;
	
}LIST;


LIST *create_list()
{
	LIST *newlist=(LIST *)malloc(sizeof(LIST));
	if(NULL==newlist)
	{
		printf("ERROR");
		exit(1);
	}
	newlist->size=0;
	newlist->arr=NULL;
	return newlist;
}

void print_list(LIST *l)
{
	
	if(l->size==0){
		printf("List is empty");
	    return;
	}
	
    for(int i=0;i<l->size;i++)
		printf("%d->",l->arr[i]);
	printf("\n");
}


LIST *append(LIST *l,int value)
{
	if(l->size==0)
	{
		l->size=1;
		l->arr=(int *)malloc(l->size);
		l->arr[l->size-1]=value;
		return l;
	}
	    
	l->size+=1;
	l->arr=(int *)realloc(l->arr,l->size);
	l->arr[l->size-1]=value;
	return l;
	
	
}

LIST *prepend(LIST *l,int value)
{
    if(l->size==0)
	{
		l->size=1;
		l->arr=(int *)malloc(l->size);
		l->arr[l->size-1]=value;
		return l;
	}
	l->size+=1;
	l->arr=(int *)realloc(l->arr,l->size);
	
	for(int i=l->size-1;i>0;i--)
	{
		l->arr[i]=l->arr[i-1];
	}
	l->arr[0]=value;
	return l;
}


LIST *deletelast(LIST *l){
  if(l->size==0)
      printf("List is empty");
  else{
      l->size-=1;
  }
  return l;
}


LIST *deletefirst(LIST *l)
{
	if(l->size==0)
		printf("List is empty");
	else{
	   if(l->size==1){
             l->size-=1;
             free(l->arr);
	   }else{
		   for(int i=0;i<l->size-1;i++)
			   l->arr[i]=l->arr[i+1];
		   l->size-=1;
	   }		   
	}
	return l;
}


LIST *deleteall(LIST *l,int value)
{
	if(l->size==0)
		printf("List is empty");
	else{
	  for(int i=0;i<l->size;i++)
	  {
		  if(l->arr[i]==value)
		  {
			  int k=i;
			  while(k<l->size-1){
				  l->arr[k]=l->arr[k+1];
				  k++;
			  }
			  l->size-=1;
		  }
	  }
	}
	
	return l;
}


void main()
{
   LIST *l;
   l=create_list();
   append(l,1);
   print_list(l);
   append(l,2);
   print_list(l);
   append(l,3);
   print_list(l);
   prepend(l,4);
   print_list(l);
   prepend(l,5);
   print_list(l);
   prepend(l,6);
   print_list(l);
   deletelast(l);
   print_list(l);
   deletelast(l);
   print_list(l);
   deletelast(l);
   print_list(l);
   deletefirst(l);
   print_list(l);
   deletefirst(l);
   print_list(l);
   deletefirst(l);
   print_list(l);
   append(l,3);
   print_list(l);
   append(l,2);
   print_list(l);
   append(l,3);
   print_list(l);
   append(l,5);
   print_list(l);
   //printf("%d",l->size);
   deleteall(l,3);
   print_list(l);
   free(l);
	
}