#include<stdio.h>
#include<stdlib.h>

void main(int argc,char **argv)
{
	FILE *fptr=fopen(argv[1],"w");
	
	/*
	int c;
	while(EOF!=(c=fgetc(fptr)))
		printf("%c",c);
	
	char buffer[100];
	
	while(NULL!=fgets(buffer,sizeof(buffer),fptr))
		printf("%s",buffer);*/
	
	char buffer[100]="This is a sample string\nDifferent string";
	/*while(1==fscanf(fptr,"%s",buffer))
		printf("%s ",buffer);*/
	
	//fread(buffer,sizeof(buffer),1,fptr);
	
	//fwrite(buffer,sizeof(buffer),1,fptr);
	
	fprintf(fptr,"%s",buffer);
	
	//puts(buffer);
	
	fclose(fptr);
  	
}