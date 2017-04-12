#include<stdio.h>
#include<conio.h>
main()
{
	float c,f;
	printf("program to convert temperature");
	printf("\n\n enter the temperature in celcius");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("\n\n the temperature in farenheit is %f",f);
	printf("\n\n enter the temperature in farenheit");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("\n\n the temperaturein celcius is % f",c);
	getch();
	return(0);
	
}
