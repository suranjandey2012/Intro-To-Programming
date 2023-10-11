#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Lexsorting(char **arr,int ROWS){

     char temp[100];
	 
	 for(int i=0;i<ROWS-1;i++)
	 {
	    for(int j=0;j<ROWS-1-i;j++)
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

   char **arr;
   int ROWS;
   
   FILE *fptr=fopen(argv[1],"r");
   
   
   //Determining number of strings
   if(EOF==(ROWS=fgetc(fptr)-'0')){
      printf("ERROR");
	  exit(1);
   }
   
   fgetc(fptr);
   fgetc(fptr);
   
   //printf("%d",ROWS);
   
   arr=(char **)malloc(ROWS*sizeof(char *));
   
   if(arr==NULL)
   {
	   printf("ERROR");
	   exit(1);
   }
   
   
   //FILE *fptr=fopen(argv[1],"r");
   
   
   //Allocate memory to each row
   for(int i=0;i<ROWS;i++){
	   *(arr+i)=(char *)malloc(100*sizeof(char));
       if(*(arr+i)==NULL)
	   {
		   printf("ERROR");
		   exit(1);
	   }
   }
   
   //char buffer[100];
   //fgets(buffer,sizeof(buffer),fptr);
   //puts(buffer);
   
   //Take string Input
   int i=0;
   /*while(i<ROWS)
   {
      if(NULL==fgets(*(arr+i),100,fptr))
	     break;
	  i++;
   }*/
   
   while(i<ROWS)
   {
       fscanf(fptr,"%s",*(arr+i));
	   i++;
   }
   
   
   
   //Print The Strings
   printf("Before Sorting The strings\n");
   i=0;
   while(i<ROWS){
	  printf("%s\n",*(arr+i));
      i++;
   }
   
   Lexsorting(arr,ROWS);
   
   printf("After sorting The strings\n");
   i=0;
   while(i<ROWS){
	  printf("%s\n",*(arr+i));
      i++;
   }
   
   
   
   /*char ch;
   while(EOF!=(ch=fgetc(fptr)))
	   printf("%c",ch);
   */
   
   
   for(int i=0;i<ROWS;i++)
	   free(*(arr+i));
   free(arr);
   
   fclose(fptr);
   

}