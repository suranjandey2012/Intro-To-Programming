#include<stdio.h>
#include<string.h>

/*void main()
{
	char *str="This is a string",*ptr;
	ptr=str;
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
}*/


/*
void main()
{
   char *str[]={"This is First string","This is second string","This is third string"};
   //printf("%ld",strlen(str[1]));
   char *newstring,*temp;
   
   temp=newstring;
   
   char *ptr1=*(str+0);
   
   
   
   while(*ptr1!='\0'){
	   *temp=*ptr1;
	   temp++;ptr1++;
   }
   
   temp=newstring;
   puts(temp);
   
   ptr1=*(str+1);
   
   while(*ptr1!='\0')
   {
	   *temp=*ptr1;
	   temp++;
	   ptr1++;
   }
   
   *temp='\0';
   
   puts(newstring);
   
}
*/


void main()
{
  char *str="This is a new string";
  
  char *newstr;
  char *new=&(str[0]);
  char *temp=newstr;
  
  while(*new!='\0')
  {
     *temp=*new;
	 temp++;
	 new++;
  }
  
  *temp='\0';
  puts(str);  
  

}





