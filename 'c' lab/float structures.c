#include<stdio.h>
#include<conio.h>
struct thermometer
{
	char name[10];
	float rate;
};
main()
{
	struct thermometer t1,t2;
	printf("\n enter the names of the thermometer:");
	fflush(stdin);
	gets(t1.name);
	fflush(stdin);
	gets(t2.name);
	printf("\n rate of the thermometers are:");
	scanf("%f%f",&t1.rate,&t2.rate);
	printf("\n\n the thermometers are %s %s :",t1.name,t2.name);
	printf("\n\n the rates are %f %f :",t1.rate,t2.rate);
}
