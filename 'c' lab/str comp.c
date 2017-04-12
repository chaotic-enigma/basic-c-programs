#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char s1[50],s2[50];
	int diff,i=0;
	printf("enter s1:");
	fflush(stdin);
	gets(s1);
	printf("\n enter s2:");
	fflush(stdin);
	gets(s2);
	while((s1[i]!='\0')||(s2[i]!='\0'))
	{
		diff=(s1[i]-s2[i]);
		if(diff!=0)
		break;
		i++;
	}
	if(diff>0)
	printf("\n\n s1 comes after s2 and s1>s2");
	if(diff<0)
	printf("\n\n s2 comes after s1 and s1<s2");
	if(diff==0)
	printf("\n\n both are equal");
	getch();
	return(0);
}
