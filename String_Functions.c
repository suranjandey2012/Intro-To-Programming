#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    char ch[]="Welcome To The World Of Programming";
    //printf("%ld",strlen(ch));
    
	//char *ch2="25.244";
	
	//atof(cons char *s) -> string to double conversion
	//double num=atof(ch2);
    
    //printf("%lf",num);


    char *ch2="This is Fun.";

    //strcat(ch,ch2);
	
	//strncat(ch,ch2,5);
    //printf("%s",ch);	
	
	//printf("%d",strcmp("11001","00111"));
	
	//strncpy(ch,ch2,5);
	//ch[5]='\0';
	//puts(ch);
	/*
	char *pos=strchr(ch,'r');  //returns pointer to character char *
	printf("%d",pos-ch); //use postion- arr start to print

    */
	
	/*char *search="World";
	
	char *ptr=strstr(ch,search);
	
	if(ptr)
		printf("Character Found:%s",ptr);
    
	//char *var=strstr(const str,pattern); print(%s)
	*/
	
	//const char delim[]=":";
	char *Token=strtok(ch," ");
	
	while(Token!=NULL)
	{
		printf("%s\n",Token);
		Token=strtok(NULL," ");
	}

}