#include<stdio.h>

void main()
{
   int c;
   while(EOF!=(c=getchar())){
   putchar(c);
   printf("%d",getchar());}
}