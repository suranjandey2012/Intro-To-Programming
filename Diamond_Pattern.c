#include<stdio.h>


void main()
{
   int n;
   scanf("%d",&n);
   
   int matrix[n][n];
   
   //Take Input
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
	        scanf("%d",&matrix[i][j]);	   
    }

    //Print The Matrix
    /*for(int i=0;i<n;i++)
    {
	   for(int j=0;j<n;j++)
		   printf("%d ",matrix[i][j]);
	   printf("\n");   
	
	}*/
    
    //Upper Half
	for(int l=0;l<n;l++)
	{
	  int i=l,j=0;
	  
	  //Space
	  for(int s=0;s<n-l-1;s++)
		  printf("  ");
	  
	  while(i>=0)
	  {
	      printf("  %d ",matrix[i][j]);
		  i--;
		  j++;
	  }
	  
	  printf("\n");
	}
	
	//Lower Half
	for(int c=1;c<n;c++)
	{
		//Space
		for(int s=0;s<c;s++)
			printf("  ");
		
	    int i=n-1,j=c;
		while(j<n)
		{
		   printf("  %d ",matrix[i][j]);
		   j++;
		}
		
		printf("\n");
	}

	
}