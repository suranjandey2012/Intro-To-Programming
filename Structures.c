#include<stdio.h>
#include<stdlib.h>
#include<math.h>


/*void main()
{
 struct student{
	 int rno;
	 char name[100];
 }s1,s2;
 
 scanf("%d %s",&s1.rno,s1.name);
 scanf("%d %s",&s2.rno,s2.name);
 
 printf("%d %s",s1.rno,s1.name);
 printf("%d %s",s2.rno,s2.name);
}*/


/*void main()
{
  typedef struct student{
     int rno;
	 char name[100];
  }STUD;

  STUD s[3];
  
  for(int i=0;i<3;i++)
    scanf("%d %s",&s[i].rno,s[i].name);
  
  
  for(int i=0;i<3;i++)
	  printf("%d %s\n",s[i].rno,s[i].name);
  
	
}*/

/*void main()
{
	typedef struct point{
	  int x;int y;
	}POINT;
	
	POINT p[2]={{1,2},{-1,-2}};
	
	printf("%d %d\n",p[0].x,p[0].y);
	printf("%d %d\n",p[1].x,p[1].y);
	
}*/

/*void main()
{
	typedef struct student{
		int rno;
		char name[20];
	}STUD;
	
	STUD s1,s2;
	
	scanf("%d %s",&s1.rno,s1.name);
	
	s2=s1;
	
	printf("%d %s",s2.rno,s2.name);
}*/

/*
typedef struct point{
	int x;
	int y;
}POINT;


double distance(POINT p1,POINT p2)
{
	return sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
}

POINT read(POINT p1)
{
	scanf("%d %d",&p1.x,&p1.y);
	return p1;
}

void main()
{
	POINT p1,p2;
	
	p1=read(p1);
	p2=read(p2);
	
	double dist=distance(p1,p2);
	printf("The distance between points:%lf",dist);
}*/	

/*typedef struct point{
	int x;
	int y;
}POINT;

typedef struct triangle{
	POINT p1,p2,p3;
}Triangle;

void main()
{
	Triangle T;
	scanf("%d %d",&T.p1.x,&T.p1.y);
	scanf("%d %d",&T.p2.x,&T.p2.y);
	scanf("%d %d",&T.p3.x,&T.p3.y);
	
	printf("%d %d\n",T.p1.x,T.p1.y);
	printf("%d %d\n",T.p2.x,T.p2.y);
	printf("%d %d",T.p3.x,T.p3.y);
}*/

typedef struct point{
	int x;
	int y;
}POINT;

typedef struct Triangle{
	POINT p1,p2,p3;
}T;

void main()
{
	T *t1;
	
	t1=(T *)malloc(sizeof(T));
	
	scanf("%d %d",&t1->p1.x,&t1->p1.y);
	scanf("%d %d",&t1->p2.x,&t1->p2.y);
	scanf("%d %d",&t1->p3.x,&t1->p3.y);
	
	printf("%d %d\n",t1->p1.x,t1->p1.y);
	printf("%d %d\n",t1->p2.x,t1->p2.y);
	printf("%d %d\n",t1->p3.x,t1->p3.y);
	
	free(t1);
}



