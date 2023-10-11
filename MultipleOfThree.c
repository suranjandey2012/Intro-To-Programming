#include<stdio.h>

void main()
{
   int n=0,sum=0,array[1000],freq[10];
   char ch;
   
   
   for(int i=0;i<10;i++)
	   freq[i]=0;
   
   //Taking Input
   while('\n'!=(ch=fgetc(stdin)))
   {
	   sum+=ch-'0';
	   array[n]=ch-'0';
	   freq[ch-'0']++;
	   n++;
   }
   
   /*for(int i=0;i<n;i++)
	   printf("%d ",array[i]);*/
   
   if(sum%3==0)
   {
	  for(int i=9;i>=0;i--)
	  {
		  while(freq[i]>0)
		  {
			  printf("%d",i);
			  freq[i]--;
		  }			  
		  
	  }		  
   
   }
   
   if(sum%3==1)
   {
	   if(freq[1]>=1)
		   freq[1]--;
	   else if(freq[4]>=1)
		   freq[4]--;
	   else if(freq[7]>=1)
		   freq[7]--;
	   else if(freq[2]>=2)
		   freq[2]-=2;
	   else if(freq[2]>=1 && freq[5]>=1){
		   freq[2]--;freq[5]--;
	   }
	   else if(freq[2]>=1 && freq[8]>=1)
	   {
		   freq[2]--;freq[8]--;
	   }
	   else if(freq[5]>=2)
		   freq[5]-=2;
	   else if(freq[5]>=1 && freq[8]>=1)
	   {
		   freq[5]--; freq[8]--;
	   }
	   
	   else if(freq[8]>=2)
		   freq[8]-=2;
	  
      //Print The Sequence	  
	  for(int i=9;i>=0;i--)
	  {
		  while(freq[i]>0)
		  {
			  printf("%d",i);
			  freq[i]--;
		  }			  
		  
	  }		  
   }
   
   else if(sum%3==2)
   {
   if(freq[2]>=1)
		   freq[2]--;
	   else if(freq[5]>=1)
		   freq[5]--;
	   else if(freq[8]>=1)
		   freq[8]--;
	   else if(freq[1]>=2)
		   freq[1]-=2;
	   else if(freq[1]>=1 && freq[4]>=1){
		   freq[1]--;freq[4]--;
	   }
	   else if(freq[1]>=1 && freq[7]>=1)
	   {
		   freq[1]--;freq[7]--;
	   }
	   else if(freq[4]>=2)
		   freq[4]-=2;
	   else if(freq[4]>=1 && freq[7]>=1)
	   {
		   freq[4]--; freq[7]--;
	   }
	   
	   else if(freq[7]>=2)
		   freq[7]-=2;
	  
      //Print The Sequence	  
	  for(int i=9;i>=0;i--)
	  {
		  while(freq[i]>0)
		  {
			  printf("%d",i);
			  freq[i]--;
		  }			  
		  
	  }		  
   }
   

}