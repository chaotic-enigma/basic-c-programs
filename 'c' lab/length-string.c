#include<stdio.h>
#include<conio.h>
main()
{
	char s[50],ch; int i,l;
	printf("\n enter the string : ");
	fflush(stdin);
	gets(s);
	l=0;i=0;
	while(s[i]!='\0')
	{
		l++;
		i++;
	}
	printf("\n\n the length is %d",l);
	return(0);
}
