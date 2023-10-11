#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void lexsort(char **arr,int N)
{
  char temp[1000];
  
  for(int i=0;i<N-1;i++)
  {
	  for(int j=0;j<N-i-1;j++)
	  {
		  if(strcmp(*(arr+j),*(arr+j+1))>=1)
		  {
			  strcpy(temp,*(arr+j));
			  strcpy(*(arr+j),*(arr+j+1));
			  strcpy(*(arr+j+1),temp);
		  }
	  }
  }


}

void main(int argc,char **argv)
{
  int N;
  
  scanf("%d",&N);
  
  char **arr;
  
  //Declare an array of char pointers
  arr=(char **)malloc(N*sizeof(char *));
  
  if(NULL==arr)
  {
	  printf("ERROR");
	  exit(1);
  }
  
  //Allocate space for each string
  for(int i=0;i<N;i++)
  {
	  *(arr+i)=(char *)malloc(1000*sizeof(char));
	  if(NULL==*(arr+i))
	  {
		  printf("ERROR");
		  exit(1);
	  }
  }
  
  FILE *fptr;
  
  fptr=fopen(argv[1],"r");
  
  //Taking the string Input  
  int i=0;
  while(1==fscanf(fptr,"%s",*(arr+i)))
	  i++;
  
  //print the strings
  /*for(int i=0;i<N;i++)
	  printf("%s\n",*(arr+i));
  */
  
  lexsort(arr,N);
  
  /*for(int i=0;i<N;i++)
	  printf("%s\n",*(arr+i));*/
  int count=1;
  for(int i=0;i<N;i++)
  {
	  
	  if(i!=N-1)
	  {
	  if(strcmp(*(arr+i),*(arr+i+1))==0)
		  count++;
	  else{
	    printf("%s %d\n",*(arr+i),count);
		count=1;
	  }}
	  else
	     printf("%s %d\n",*(arr+i),count);
  }
  
  
  fclose(fptr);
  

}