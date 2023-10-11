#include<stdio.h>
#include<stdlib.h>

//Scanset Example
/*
void main()
{
   char buffer[100];
   
   scanf("%[^\\n]s",buffer);
   printf("%s",buffer);
}

//[^\\n]
*/


void main()
{
    int n;
	
	scanf("%d",&n);
	
	int flagr=0,flagb=0;
	
	double x,y;
	char ch;
	
	double minxr,maxxr,minyr,maxyr;
	double minxb,maxxb,minyb,maxyb;
	
	
	
	for(int lines=0;lines<n;lines++)
	{
		scanf("%lf %lf %c",&x,&y,&ch);
		
		if(ch=='R' && flagr==0)
		{
		    minxr=x;
			maxxr=x;
			minyr=y;
			maxyr=y;
			flagr=1;
		}
		
		else if(ch=='B' && flagb==0)
		{
		    minxb=x;
			maxxb=x;
			minyb=y;
			maxyb=y;
			flagb=1;
		}
		
		else if(ch=='R')
		{
		   if(x<minxr)
			   minxr=x;
		   else if(x>maxxr)
			   maxxr=x;
		   
		   if(y<minyr)
			   minyr=y;
		   else if(y>maxyr)
			   maxyr=y;
		   
		}
		
		
		else if(ch=='B')
		{
		   if(x<minxb)
			   minxb=x;
		   else if(x>maxxb)
			   maxxb=x;
		   
		   if(y<minyb)
			   minyb=y;
		   else if(y>maxyb)
			   maxyb=y;
		   
		}
	}
	
	//printf("%lf %lf %lf %lf\n",minxr,maxxr,minyr,maxyr);
	//printf("%lf %lf %lf %lf\n",minxb,maxxb,minyb,maxyb);
	
	
	if((maxxb<minxr || maxxr<minxb) && (maxyb<minyr || maxyr<minyb))
	    printf("XY");
	else if(maxxb<minxr || maxxr<minxb)
		printf("Y");
	else if(maxyb<minyr || maxyr<minyb)
		printf("X");
	else
		printf("Not Possible");
	
   
}
