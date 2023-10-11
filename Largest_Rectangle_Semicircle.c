#include<stdio.h>
#include<math.h>
void main()
{
	double xa,ya,xb,yb;
	
	//Taking Input
	scanf("%lf %lf",&xa,&ya);
	scanf("%lf %lf",&xb,&yb);
	
	//Print
	//printf("%lf %lf\n",xa,ya);
	//printf("%lf %lf",xb,yb);
	
	if(ya!=yb)
		printf("INVALID INPUT");
	else{
	  double cx,cy;
	  cx=(xa+xb)/2;
	  cy=ya;
	  
	  double r=sqrt(pow((xb-xa),2)+pow((yb-ya),2))/2;
	  
	  printf("%.3lf %.3lf\n",(cx-(r/sqrt(2))),ya);
	  printf("%.3lf %.3lf\n",(cx-(r/sqrt(2))),(cy+(r/sqrt(2))));
	  printf("%.3lf %.3lf\n",(cx+(r/sqrt(2))),(cy+(r/sqrt(2))));
	  printf("%.3lf %.3lf\n",(cx+(r/sqrt(2))),yb);
	  
	}
}