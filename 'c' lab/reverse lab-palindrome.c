#include<stdio.h>
#include<conio.h>
main()
{
	int w,x,y,z=0;
	printf("program to find the reverse order of the number and checking whether it is palindrome or not.");
	printf("\n\n enter x:");
	scanf("%d",&x);
	w=x;
	while(x!=0)
	{
		y=x%10;
		z=z*10+y;
		x=x/10;
	}
	
	printf("\n\n the reverse order of number is : %d",z);
	if(w==z)
	{
		printf("\n\n palindrome");
	}
	else
	printf("\n\n not a palindrome");	
	printf("\n\n end");
	getch();
	return(0);
}
