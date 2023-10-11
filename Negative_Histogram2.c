#include<stdio.h>

void main()
{
	int arr[10];
	
	int max,min;
	
	scanf("%d",&arr[0]);
	max=arr[0];
	min=arr[0];
	
	for(int i=1;i<10;i++){
		scanf("%d",&arr[i]);
	    if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}
	
	//for(int i=0;i<10;i++)
	//	printf("%d ",arr[i]);

    if(min>=0)
	{
		for(int i=max;i>0;i--){
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
	
	else if(min<0)
	{
		for(int i=max;i>0;i--){
			for(int j=0;j<10;j++)
			{
				if(arr[j]>=i)
					printf("#");
				else
					printf(" ");
			}
			printf("\n");
		}
		for(int j=0;j<10;j++)
			printf("-");
		printf("\n");
		for(int i=-1;i>=min;i--)
		{
			for(int j=0;j<10;j++)
			{
				if(i>=arr[j])
					printf("#");
				else
					printf(" ");
			}
			printf("\n");
		}
		
	}
   
}