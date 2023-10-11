#include<stdio.h>
#include<math.h>


double l(double x)
{
  if(x==0 || x==1)
      return 0;
  else
	  return log10(x)/log10(2);
}

void main()
{

  char ch;
  int oc=0,zc=0,qc=0;
  double min=0,max=0;
  
  //counting the number of zeroes and ones and question marks
  while('\n'!=(ch=getc(stdin)))
  {
       if(ch=='1')
		   oc++;
	   else if(ch=='0')
		   zc++;
	   else if(ch=='?')
		   qc++;
  }
  
  //printf("%d %d %d",oc,zc,qc);
  if(qc==0)
  {
     if(zc==0 || oc==0)
		printf("%lf %lf",min,max); 
     else{
	    if(zc==oc){
		 min=1;max=1;
		 printf("%.3lf %.3lf",min,max);
		}
		
		double sum=(-1*(((double)zc/(double)(zc+oc))*l((double)zc/(double)(zc+oc))))+(-1*(((double)oc/(double)(zc+oc))*l((double)oc/(double)(zc+oc))));
		printf("%.3lf %.3lf",sum,sum);
	 } 
	 
  }
  else if(qc!=0)
  {
	  if(zc>oc)
	  {
		  int tempz=zc;
		  tempz+=qc;
		  double min=(-1*(((double)tempz/(double)(tempz+oc))*l((double)tempz/(double)(tempz+oc))))+(-1*(((double)oc/(double)(tempz+oc))*l((double)oc/(double)(tempz+oc))));
	      
		  while(zc!=oc && qc!=0)
		  {
		     oc++;
			 qc--;
		  }
		  int c=0;
		  while(qc!=0)
		  {
			  if(c%2==0){
				  zc++;
			  }
			  else if(c%2!=0)
			  {
				  oc++;
			  }
		      qc--;c++;
		  }
          double max=(-1*(((double)zc/(double)(zc+oc))*l((double)zc/(double)(zc+oc))))+(-1*(((double)oc/(double)(zc+oc))*l((double)oc/(double)(zc+oc))));		  
		  
		  if(min==0)
		  {
			  double v=0;
			  printf("%.3lf %.3lf",v,max);
		  }
		  else{
		  printf("%.3lf %.3lf",min,max);
		  }
	  }
	  
	  else if(oc>zc)
	  {
		  int tempo=oc;
		  tempo+=qc;
		  double min=(-1*(((double)tempo/(double)(tempo+zc))*l((double)tempo/(double)(tempo+zc))))+(-1*(((double)zc/(double)(tempo+zc))*l((double)zc/(double)(tempo+zc))));
	      
		  while(oc!=zc && qc!=0)
		  {
		     zc++;
			 qc--;
		  }
		  int c=0;
		  while(qc!=0)
		  {
			  if(c%2==0){
				  zc++;
			  }
			  else if(c%2!=0)
			  {
				  oc++;
			  }
		      qc--;c++;
		  }
          double max=(-1*(((double)zc/(double)(zc+oc))*l((double)zc/(double)(zc+oc))))+(-1*(((double)oc/(double)(zc+oc))*l((double)oc/(double)(zc+oc))));		  
		  
		  if(min==0)
		  {
			  double v=0;
			  printf("%.3lf %.3lf",v,max);
		  }
		  else{
		  printf("%.3lf %.3lf",min,max);
		  }
	  }
	  
	  else if(zc=oc)
	  {
	     int tempz=zc;
		 tempz+=qc;
		 double min=(-1*(((double)tempz/(double)(tempz+oc))*l((double)tempz/(double)(tempz+oc))))+(-1*(((double)oc/(double)(tempz+oc))*l((double)oc/(double)(tempz+oc))));
	     
		 int c=0;
		 while(qc!=0)
		 {
		    if(c%2==0)
				oc++;
			else
				zc++;
			c++;
			qc--;
		 }
		 double max=(-1*(((double)zc/(double)(zc+oc))*l((double)zc/(double)(zc+oc))))+(-1*(((double)oc/(double)(zc+oc))*l((double)oc/(double)(zc+oc))));		  
	     printf("%.3lf %.3lf",min,max);
	  }
  }
  
}