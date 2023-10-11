#include<stdio.h>
#include<string.h>

void main()
{
   int row,col;
   char buffer[1000];
   
   fgets(buffer,sizeof(buffer),stdin);
   
   //puts(buffer);
   
   row=buffer[0]-'0';
   col=buffer[2]-'0';
   
   //printf("%d %d",row,col);
   
   char arr[row][col];
   
   int r=0,c=0;
   
   //Take Input
   for(int i=3;i<strlen(buffer) && buffer[i]!='\0';i++)
   {
	   
	   if(c!=col)
	   {
		  if(buffer[i]>='A' && buffer[i]<='Z'){
            arr[r][c]=buffer[i];
            c++;
		  }			
	   }
	   else{
		   r++;c=0;
		   if(buffer[i]>='A' && buffer[i]<='Z'){
            arr[r][c]=buffer[i];
            c++;
		   }
	   }
   }


   //Print The Matrix
   /*for(int i=0;i<row;i++)
   {
	   for(int j=0;j<col;j++)
		   printf("%c ",arr[i][j]);
	   printf("\n");
   }*/

   int rowstart=0,rowend=row-1,colstart=0,colend=col-1;
   
   
   
   //Traversal when |r|=|c|
   int j,i;
   if(row==col)
   {
      while(rowstart<=rowend && colstart<=colend)
	  {
	    
		//FIRST
		j=colstart;i=rowstart;
		while(j<=colend){
			printf("%c ",arr[i][j]);
		    j++;
		}
		rowstart++;
		
		//SECOND
		i=rowstart;j--;
		while(i<=rowend)
		{
			printf("%c ",arr[i][j]);
			i++;
		}
		colend--;
		
		//THIRD
		j=colend;i--;
		while(j>=colstart)
		{
		  printf("%c ",arr[i][j]);
          j--;		  
		}
		rowend--;
		
		//FOURTH
		
		i=rowend;j++;
		while(i>=rowstart){
		   printf("%c ",arr[i][j]);
		   i--;
		}
		colstart++;
		
	  }
   }
   
   else if(row<col)
   {
	   while(rowstart<=rowend)
	  {
	    
		//FIRST
		j=colstart;i=rowstart;
		while(j<=colend){
			printf("%c ",arr[i][j]);
		    j++;
		}
		rowstart++;
		
		//SECOND
		i=rowstart;j--;
		while(i<=rowend)
		{
			printf("%c ",arr[i][j]);
			i++;
		}
		colend--;
		
		//THIRD
		j=colend;i--;
		while(j>=colstart)
		{
		  printf("%c ",arr[i][j]);
          j--;		  
		}
		rowend--;
		
		//FOURTH
		
		i=rowend;j++;
		while(i>=rowstart){
		   printf("%c ",arr[i][j]);
		   i--;
		}
		colstart++;
		
	  }
   }
   
   else if(col<row)
   {
	  while(colstart<=colend)
	  {
	    
		//FIRST
		j=colstart;i=rowstart;
		while(j<=colend){
			printf("%c ",arr[i][j]);
		    j++;
		}
		rowstart++;
		
		//SECOND
		i=rowstart;j--;
		while(i<=rowend)
		{
			printf("%c ",arr[i][j]);
			i++;
		}
		colend--;
		
		//THIRD
		j=colend;i--;
		while(j>=colstart)
		{
		  printf("%c ",arr[i][j]);
          j--;		  
		}
		rowend--;
		
		//FOURTH
		
		i=rowend;j++;
		while(i>=rowstart){
		   printf("%c ",arr[i][j]);
		   i--;
		}
		colstart++;
		
	  }
   }
   
   
  
}