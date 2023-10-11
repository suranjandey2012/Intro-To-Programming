#include<stdio.h>


int main()
{
   
   int arr[10];
   
   int i=0;
   //Take Input
   while(1==scanf("%d",&arr[i]))
        i++;
   
   int max=arr[0];
   int min=arr[0];
  
   for(int i=0;i<10;i++)
   {
       if(arr[i]>max)
          max=arr[i];
       if(arr[i]<min)
          min=arr[i];   
         
   }
   
   /*
   for(int i=0;i<10;i++)
      printf("%d ",arr[i]);
   
   printf("\n%d",max);
   */
   if(min<0){
   for(int i=max;i>=min;i--)
   {  
   
      if(i==0)
      {
         for(int j=0;j<10;j++)
            printf("-");
      }
   
     else if(i>0){
      for(int j=0;j<10;j++)
      {
         if(arr[j]>=i)
            printf("#");
         else
            printf(" ");   
      }
     }
      
     else if(i<0)
      {
        for(int j=0;j<10;j++)
        {
          if(arr[j]<0 && arr[j]<=i)
              printf("#");
          else
              printf(" ");    
        }
      }
      
     
      
      printf("\n");
   }
   }
   
  else if(min>=0)
   {
     for(int i=max;i>0;i--)
   {
      for(int j=0;j<10;j++)
      {
         if(arr[j]>=i)
            printf("#");
         else
            printf(" ");   
      }
      
      printf("\n");
   }
   }
   
   
   
        return 0;
   
}
