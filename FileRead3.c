#include<stdio.h>

void main(int argc,char **argv)
{
   int c,vcount=0,wcount;
   FILE *fptr=fopen(argv[1],"r");
   while(EOF!=(c=fgetc(fptr)))
         putchar(c);
   fclose(fptr);
}