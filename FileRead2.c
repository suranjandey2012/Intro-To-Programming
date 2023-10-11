#include<stdio.h>

void main(int argc,char **argv)
{
   int c,vcount=0,wcount;
   FILE *fptr=fopen(argv[1],"r");
   while(EOF!=(c=fgetc(fptr))){
       if('a'==c || 'e'==c || 'i'==c || 'o'==c || 'u'==c ||'A'==c || 'E'==c || 'I'==c || 'O'==c || 'U'==c)
		   vcount++;
	   if(32==c || '\n'==c)
		   wcount++;
   }
   printf("%d %d",vcount,wcount+1);
   fclose(fptr);
}
