#include<stdio.h>

void main()
{
   char a='S';
   char c[40]="This is a string";
   char s[40]="New string";
   putchar(a);
   puts(c);
   puts(s);
   
   float v=25.22;
   printf("%08.2f\n",v);
   printf("%-8.4f\n",v);
   
   int i1=10;
   long int i2=1000000000000000;
   long double i3=10000000000000000;
   printf("%zd\n",sizeof(i1));
   printf("%zd\n",sizeof(i2));
   printf("%zd\n",sizeof(i3));
   int roll=23;
   char buffer[100];
   sprintf(buffer,"mtcs23%d.txt",roll);
   printf("%s\n",buffer);
}

