#include<stdio.h>
#include<stdlib.h>

typedef struct list{
	int size;
	int *arr;
}LIST;

LIST *create_list()
{
	LIST *l=(LIST *)malloc(sizeof(LIST));
	l->size=0;
	l->arr=NULL;
	
	return l;
}

void print_list(LIST *l)
{
	for(int i=0;i<l->size;i++)
	    printf("%d->",l->arr[i]);
	printf("\n");
}

LIST *append(LIST *l,int val)
{
	int newsize=(l->size)+1;
	l->size=newsize;
	if(NULL==(l->arr=(int *)realloc(l->arr,newsize*sizeof(int))))
	{
		printf("ERROR");
		exit(1);
	}
	
	l->arr[newsize-1]=val;
   
    return l;
}

LIST *prepend(LIST *l,int val)
{
	int newsize=(l->size)+1;
	l->size=newsize;
	if(NULL==(l->arr=(int *)realloc(l->arr,newsize*sizeof(int))))
	{
		printf("ERROR");
		exit(1);
	}
	
	for(int i=newsize-1;i>=1;i--)
		l->arr[i+1]=l->arr[i];
	
	l->arr[0]=val;
	
	return l;
}


LIST *delete_last(LIST *l)
{
	l->size=l->size-1;
	return l;
}

LIST *delete_first(LIST *l)
{
	if(l->size==1)
	{
		l->size-=1;
		return l;
	}
	for(int i=1;i<l->size;i++)
		l->arr[i-1]=l->arr[i];
	
	l->size-=1;
	return l;
}

/*LIST *deleteall(LIST *l,int val)
{
	for(int i=0;i<l->size;i++)
	{
		if(l->arr[i]==val)
			break;
    }
	if(i!=l->size)
	{
		if(i==l->size-1)
		   
	}
	
	return l;
}*/

LIST *deletelist(LIST *l)
{
	free(l->arr);
	l->size=0;
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
	append(l,4);
	print_list(l);
	append(l,5);
	print_list(l);
	append(l,6);
	print_list(l);
	append(l,7);
	print_list(l);
	append(l,8);
	print_list(l);
	append(l,9);
	print_list(l);
	append(l,10);
	print_list(l);
	prepend(l,1);
	print_list(l);
	prepend(l,2);
	print_list(l);
	prepend(l,3);
	print_list(l);
	prepend(l,4);
	print_list(l);
	prepend(l,5);
	print_list(l);
	prepend(l,6);
	print_list(l);
	prepend(l,7);
	print_list(l);
	prepend(l,8);
	print_list(l);
	prepend(l,9);
	print_list(l);
	prepend(l,10);
	print_list(l);
	delete_last(l);
	print_list(l);
	delete_last(l);
	print_list(l);
	delete_last(l);
	print_list(l);
	delete_last(l);
	print_list(l);
	delete_last(l);
	print_list(l);
	delete_first(l);
	print_list(l);
	delete_first(l);
	print_list(l);
	delete_first(l);
	print_list(l);
	delete_first(l);
	print_list(l);
	delete_first(l);
	print_list(l);
	deletelist(l);
	free(l);
	
}