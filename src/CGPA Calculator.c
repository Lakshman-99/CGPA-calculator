/*
 ============================================================================
 Name        : CGPA.c
 Author      : Lakshman S
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void mech()
{
	int a,i=0;
	float c,cgpa;
	float b[20];
	printf("\n Enter the no. of semesters completed: ");
	scanf("%d",&a);
	while(i<a)
	{
		printf("\n Enter the GPA of semester %d: ",i+1);
		scanf("%f",&b[i]);
		i+=1;
	}
	for(int j=1;j<=a;j++)
	{
		if(j==1)
		{
			c=26*b[j-1];
		}
		else if(j==2)
		{
			c=c+(28*b[j-1]);
		}
		else if(j==3)
		{
			c=c+(28*b[j-1]);
		}
		else if(j==4)
		{
			c=c+(27*b[j-1]);
		}
		else if(j==5)
		{
			c=c+(29*b[j-1]);
		}
		else if(j==6)
		{
			c=c+(27*b[j-1]);
		}
		else if(j==7)
		{
			c=c+(22*b[j-1]);
		}
		else
		{
			c=c+(16*b[j-1]);
		}
	}
	for(int k=2;k<=a;k++)
	{
		if(k==2)
		{
			cgpa=c/54;
		}
		else if(k==3)
		{
			cgpa=c/82;
		}
		else if(k==4)
		{
			cgpa=c/109;
		}
		else if(k==5)
		{
			cgpa=c/138;
		}
		else if(k==6)
		{
			cgpa=c/165;
		}
		else if(k==7)
		{
			cgpa=c/187;
		}
		else if(k==8)
		{
			cgpa=c/203;
		}
		else
		{
			printf("\n Incorrect!!!");
		}

	}

	printf("\n Your CGPA is %f",cgpa);
}
void it()
{
	int a,i=0;
		float c,cgpa;
		float b[20];
		printf("\n Enter the no. of semesters completed: ");
		scanf("%d",&a);
		while(i<a)
		{
			printf("\n Enter the GPA of semester %d: ",i+1);
			scanf("%f",&b[i]);
			i+=1;
		}
		for(int j=1;j<=a;j++)
		{
			if(j==1)
			{
				c=26*b[j-1];
			}
			else if(j==2)
			{
				c=c+(28*b[j-1]);
			}
			else if(j==3)
			{
				c=c+(27*b[j-1]);
			}
			else if(j==4)
			{
				c=c+(25*b[j-1]);
			}
			else if(j==5)
			{
				c=c+(25*b[j-1]);
			}
			else if(j==6)
			{
				c=c+(24*b[j-1]);
			}
			else if(j==7)
			{
				c=c+(22*b[j-1]);
			}
			else
			{
				c=c+(12*b[j-1]);
			}
		}
		for(int k=2;k<=a;k++)
		{
			if(k==2)
			{
				cgpa=c/54;
			}
			else if(k==3)
			{
				cgpa=c/81;
			}
			else if(k==4)
			{
				cgpa=c/106;
			}
			else if(k==5)
			{
				cgpa=c/131;
			}
			else if(k==6)
			{
				cgpa=c/155;
			}
			else if(k==7)
			{
				cgpa=c/177;
			}
			else if(k==8)
			{
				cgpa=c/189;
			}
			else
			{
				printf("\n Incorrect!!!");
			}

		}

		printf("\n Your CGPA is %f",cgpa);

}
void cse()
{
	int a,i=0;
		float c,cgpa;
		float b[20];
		printf("\n Enter the no. of semesters completed: ");
		scanf("%d",&a);
		while(i<a)
		{
			printf("\n Enter the GPA of semester %d: ",i+1);
			scanf("%f",&b[i]);
			i+=1;
		}
		for(int j=1;j<=a;j++)
		{
			if(j==1)
			{
				c=26*b[j-1];
			}
			else if(j==2)
			{
				c=c+(28*b[j-1]);
			}
			else if(j==3)
			{
				c=c+(27*b[j-1]);
			}
			else if(j==4)
			{
				c=c+(26*b[j-1]);
			}
			else if(j==5)
			{
				c=c+(27*b[j-1]);
			}
			else if(j==6)
			{
				c=c+(25*b[j-1]);
			}
			else if(j==7)
			{
				c=c+(22*b[j-1]);
			}
			else
			{
				c=c+(12*b[j-1]);
			}
		}
		for(int k=2;k<=a;k++)
		{
			if(k==2)
			{
				cgpa=c/54;
			}
			else if(k==3)
			{
				cgpa=c/81;
			}
			else if(k==4)
			{
				cgpa=c/107;
			}
			else if(k==5)
			{
				cgpa=c/134;
			}
			else if(k==6)
			{
				cgpa=c/159;
			}
			else if(k==7)
			{
				cgpa=c/181;
			}
			else if(k==8)
			{
				cgpa=c/193;
			}
			else
			{
				printf("\n Incorrect!!!");
			}

		}

		printf("\n Your CGPA is %f",cgpa);
}
void ece()
{
	int a,i=0;
		float c,cgpa;
		float b[20];
		printf("\n Enter the no. of semesters completed: ");
		scanf("%d",&a);
		while(i<a)
		{
			printf("\n Enter the GPA of semester %d: ",i+1);
			scanf("%f",&b[i]);
			i+=1;
		}
		for(int j=1;j<=a;j++)
		{
			if(j==1)
			{
				c=26*b[j-1];
			}
			else if(j==2)
			{
				c=c+(28*b[j-1]);
			}
			else if(j==3)
			{
				c=c+(28*b[j-1]);
			}
			else if(j==4)
			{
				c=c+(28*b[j-1]);
			}
			else if(j==5)
			{
				c=c+(27*b[j-1]);
			}
			else if(j==6)
			{
				c=c+(25*b[j-1]);
			}
			else if(j==7)
			{
				c=c+(22*b[j-1]);
			}
			else
			{
				c=c+(12*b[j-1]);
			}
		}
		for(int k=2;k<=a;k++)
		{
			if(k==2)
			{
				cgpa=c/54;
			}
			else if(k==3)
			{
				cgpa=c/82;
			}
			else if(k==4)
			{
				cgpa=c/110;
			}
			else if(k==5)
			{
				cgpa=c/137;
			}
			else if(k==6)
			{
				cgpa=c/162;
			}
			else if(k==7)
			{
				cgpa=c/184;
			}
			else if(k==8)
			{
				cgpa=c/196;
			}
			else
			{
				printf("\n Incorrect!!!");
			}

		}

		printf("\n Your CGPA is %f",cgpa);
}
void eee()
{
	int a,i=0;
		float c,cgpa;
		float b[20];
		printf("\n Enter the no. of semesters completed: ");
		scanf("%d",&a);
		while(i<a)
		{
			printf("\n Enter the GPA of semester %d: ",i+1);
			scanf("%f",&b[i]);
			i+=1;
		}
		for(int j=1;j<=a;j++)
		{
			if(j==1)
			{
				c=26*b[j-1];
			}
			else if(j==2)
			{
				c=c+(28*b[j-1]);
			}
			else if(j==3)
			{
				c=c+(27*b[j-1]);
			}
			else if(j==4)
			{
				c=c+(29*b[j-1]);
			}
			else if(j==5)
			{
				c=c+(29*b[j-1]);
			}
			else if(j==6)
			{
				c=c+(26*b[j-1]);
			}
			else if(j==7)
			{
				c=c+(21*b[j-1]);
			}
			else
			{
				c=c+(15*b[j-1]);
			}
		}
		for(int k=2;k<=a;k++)
		{
			if(k==2)
			{
				cgpa=c/54;
			}
			else if(k==3)
			{
				cgpa=c/81;
			}
			else if(k==4)
			{
				cgpa=c/110;
			}
			else if(k==5)
			{
				cgpa=c/139;
			}
			else if(k==6)
			{
				cgpa=c/165;
			}
			else if(k==7)
			{
				cgpa=c/186;
			}
			else if(k==8)
			{
				cgpa=c/201;
			}
			else
			{
				printf("\n Incorrect!!!");
			}

		}

		printf("\n Your CGPA is %f",cgpa);
}
void eandi()
{
	int a,i=0;
		float c,cgpa;
		float b[20];
		printf("\n Enter the no. of semesters completed: ");
		scanf("%d",&a);
		while(i<a)
		{
			printf("\n Enter the GPA of semester %d: ",i+1);
			scanf("%f",&b[i]);
			i+=1;
		}
		for(int j=1;j<=a;j++)
		{
			if(j==1)
			{
				c=26*b[j-1];
			}
			else if(j==2)
			{
				c=c+(28*b[j-1]);
			}
			else if(j==3)
			{
				c=c+(28*b[j-1]);
			}
			else if(j==4)
			{
				c=c+(27*b[j-1]);
			}
			else if(j==5)
			{
				c=c+(26*b[j-1]);
			}
			else if(j==6)
			{
				c=c+(26*b[j-1]);
			}
			else if(j==7)
			{
				c=c+(23*b[j-1]);
			}
			else
			{
				c=c+(15*b[j-1]);
			}
		}
		for(int k=2;k<=a;k++)
		{
			if(k==2)
			{
				cgpa=c/54;
			}
			else if(k==3)
			{
				cgpa=c/82;
			}
			else if(k==4)
			{
				cgpa=c/109;
			}
			else if(k==5)
			{
				cgpa=c/135;
			}
			else if(k==6)
			{
				cgpa=c/161;
			}
			else if(k==7)
			{
				cgpa=c/184;
			}
			else if(k==8)
			{
				cgpa=c/199;
			}
			else
			{
				printf("\n Incorrect!!!");
			}

		}

		printf("\n Your CGPA is %f",cgpa);
}
void civil()
{
	int a,i=0;
		float c,cgpa;
		float b[20];
		printf("\n Enter the no. of semesters completed: ");
		scanf("%d",&a);
		while(i<a)
		{
			printf("\n Enter the GPA of semester %d: ",i+1);
			scanf("%f",&b[i]);
			i+=1;
		}
		for(int j=1;j<=a;j++)
		{
			if(j==1)
			{
				c=26*b[j-1];
			}
			else if(j==2)
			{
				c=c+(28*b[j-1]);
			}
			else if(j==3)
			{
				c=c+(29*b[j-1]);
			}
			else if(j==4)
			{
				c=c+(27*b[j-1]);
			}
			else if(j==5)
			{
				c=c+(27*b[j-1]);
			}
			else if(j==6)
			{
				c=c+(27*b[j-1]);
			}
			else if(j==7)
			{
				c=c+(23*b[j-1]);
			}
			else
			{
				c=c+(15*b[j-1]);
			}
		}
		for(int k=2;k<=a;k++)
		{
			if(k==2)
			{
				cgpa=c/54;
			}
			else if(k==3)
			{
				cgpa=c/83;
			}
			else if(k==4)
			{
				cgpa=c/110;
			}
			else if(k==5)
			{
				cgpa=c/137;
			}
			else if(k==6)
			{
				cgpa=c/164;
			}
			else if(k==7)
			{
				cgpa=c/187;
			}
			else if(k==8)
			{
				cgpa=c/202;
			}
			else
			{
				printf("\n Incorrect!!!");
			}

		}

		printf("\n Your CGPA is %f",cgpa);
}

void main()
{
	int c;
	printf("                                                    ___________________\n");
	printf("                                                    ||CGPA CALCULATOR||\n");
	printf("                                                    ~~~~~~~~~~~~~~~~~~~\n");
	printf("\n ***************** Enter your department ******************\n\n");
	printf("*********>1.Mechanical Engineering                          |\n");
	printf("*********>2.Civil Engineering                               |\n");
	printf("*********>3.Information Technology                          |\n");
	printf("*********>4.Electronics and Communication Engineering       |\n");
	printf("*********>5.Computer Science Engineering                    |\n");
	printf("*********>6.Electrical,Electronic and Engineering           |\n");
	printf("*********>7.Electrical and Instrumentation                  |\n");
	printf("*********>8.Quit                                            |\n");
	printf("\n*************************************************************\n");
	while(1)
	{
	printf("\n Enter choice: ");
	scanf("%d",&c);
	switch(c)
	{
	case 1:mech();break;
	case 2:civil();break;
	case 3:it();break;
	case 4:ece();break;
	case 5:cse();break;
	case 6:eee();break;
	case 7:eandi();break;
	case 8:break;
	default:printf("\n Check your department!!");
	}
	if(c==8) break;
    }
	getch();


}
