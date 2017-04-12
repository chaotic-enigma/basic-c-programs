#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int i,j;
	char s[50],temp,o[50];
	printf("\n enter any string : ");
	fflush(stdin);
	gets(s);
	strcpy(o,s);
	i=0;
	j=strlen(s)-1;
	while(i<j)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		i++;
		j--;
	}
	printf("\n\n reverse : %s",s);
	if(strcmp(o,s)==0)
	{
		printf("\n\n palindrome");
	}
	else
	{
	    printf("\n\n not a palindrome");
	}
	getch();
	return(0);
}
