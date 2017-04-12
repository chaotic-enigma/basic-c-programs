#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char s1[50],s2[50],a[50];
	s1[50]=a[50];
	int x,y;
	printf("various string library functions");
	printf("\n\n enter s1:");
	gets(s1);
	printf("\n\n enter s2:");
	gets(s2);
	x=strlen(s1); y=strlen(s2);
	printf("\n length of s1 and s2 is %d %d",x,y);
	strcpy(a,s2);
	printf("\n copy is %s",a);
	strcat(s1,s2);
	printf("\n concatenation of two strings is %s",s1,s2);
	strcmp(a,s2);
	if(strcmp(s1,s2)==0)
	printf("\n both are equal");
	else if(strcmp(s1,s2)>0)
	printf("\n the value is positive");
	else
	printf("\n the value is negative");
	strrev(s2);
	printf("\n s2=%s",s2);
	printf("\n\n bye");
	getch();
	return(0);
}
