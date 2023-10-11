#include<stdio.h>


void main()
{
  char str[100];
  
  //Take input string
  fgets(str,sizeof(str),stdin);
  //puts(str);
  
  int ascii[1000];
  
  
  for(int i=0;i<1000;i++)
	  ascii[i]=0;
  
  
  
  char *ch;
  
  ch=str;
  
  
  
  while(*ch!='\0')
  {
     //printf("%d ",*ch);
	 ascii[*ch]++;
	 ch++;
  }
  
  for(int i=0;i<1000;i++){
	  if(ascii[i]==1 && (((i>=65) && (i<=91)) || ((i>=97) && (i<=122))))
		  printf("%c ",i);
  }

}