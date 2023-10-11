#include<stdio.h>
#include<stdlib.h>

void main()
{
   int n;
   scanf("%d",&n);
   
   int A[n],B[n];
   
   int index[10];
   
   //Taking Input
   
   for(int i=0;i<n;i++){
	   scanf("%d",&A[i]);
	   index[A[i]]=i;
   }
   
   for(int i=0;i<n;i++)
	    scanf("%d",&B[i]);
    
   //Traverse over B and compute max diff
   int max_diff=-1,elem=-1,fi=-1,si=-1;	
	//printf("%d",abs(-3));
	for(int i=0;i<n;i++)
	{
	  int disp=abs(i-index[B[i]]);
	  if(disp>max_diff)
	  {
	    elem=B[i];
		fi=index[B[i]];
		si=i;
		max_diff=disp;
	  }
	  
	  if(disp=max_diff)
	  {
		  if(elem>B[i])
		  {
			 elem=B[i];
		     fi=index[B[i]];
		     si=i; 
		  }
	  }
	}
	
	printf("%d %d %d",elem,fi,si);
}