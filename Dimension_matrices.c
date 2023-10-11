#include<stdio.h>


void main(int argc,char **argv){

  FILE *fp;
  
  
  if(NULL==(fp=fopen(argv[1],"r")))
	  printf("ERROR");
  
  //Read the elements
  int n=fgetc(fp)-'0';
  
  //printf("%d",n);
  
  int arr[n],i=0;
  
  int ch;
  
  while(EOF!=(ch=fgetc(fp))){
	  if(ch!=32){
	  arr[i]=ch-'0';
      //printf("%d",arr[i]);
	  i++;
	  }
  }
  
  
  
 
  
  //Printing The array
  for(int r=1;r<=n;r++){
	  int c;
	  if(n%r==0){
		  c=n/r;
	  int k=0;
	  for(int i=0;i<r;i++){
		  for(int j=0;j<c;j++)
			  printf("%d ",arr[k++]);
		  printf("\n");
	  }
	 printf("\n"); 
  }
  }
  
  fclose(fp);

}
