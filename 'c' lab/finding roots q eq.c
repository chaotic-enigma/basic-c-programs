#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,c,d,root1,root2;
	printf("program to find the roots of quadratic equation");
	printf("\n\n enter the coeffcients");
	scanf("%f %f %f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if(d>0)
	{
	   printf("\n\n the roots are real and distinct");
	   root1=((-b)+sqrt(d))/(2*a);
	   root2=((-b)-sqrt(d))/(2*a);
	   printf("\n\n the roots are %f and %f",root1,root2);
	}	
	else if(d==0)
	{
		printf("\n\n the roots are real and equal");
		root1=(-b)/(2*a);
		root2=root1;
		printf("\n\n the roots are %f and %f",root1 ,root2);
	}
	else
	{
		printf("\n\n the equation has complex roots");
		root1=(-b)/(2*a);
		root2=sqrt(fabs(d))/(2*a);
		printf("\n the roots are %f+i %f and %f-i %f",root1,root2,root1,root2);
	}
	printf("\n\n end of the program");
	getch();
	return(0);
}
