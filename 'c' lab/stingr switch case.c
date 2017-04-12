#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char s1[50],s2[50],ch;
	int x;
	do
	{
	system("cls");	
	printf(" various string library functions");
	printf("\n\n enter s1:");
	fflush(stdin);
	gets(s1);
	printf("\n press  \n 1 to find length  \n 2 to concatenate   \n 3 to compare  \n 4 to copy  \n 5 to find reverse  \n 6 to find sub string");
	printf("\n\n enter the choice:");
	fflush(stdin);
	scanf("%c",&ch);
	switch(ch)
	{
	case '1' :x=strlen(s1);
		      printf("\n the length of s1 is %d ",x);
		      break;
	case '2' :printf("\n enter s2:");
	          fflush(stdin);
	          gets(s2);
	          strcat(s1,s2);
	          printf("\n the concatenation of two strings is %s",s1);
	          break;
	case '3' :printf("\n enter s2:");
	          fflush(stdin);
	          gets(s2);
			  if(strcmp(s1,s2)==0)
	          printf("\n both are equal");
	          else if(strcmp(s1,s2)>0)
	          printf("\n the value is positive");
	          else
	          printf("\n the value is negative");
	          break;
	case '4' :printf("\n enter s2:");
	          fflush(stdin);
	          gets(s2); 
	          strcpy(s1,s2);
	          printf("\n copy is %s",s1);
	          break; 
	case '5' :strrev(s1);
	          printf("\n reverse is %s",s1);
	          break;
	case '6' :printf("\n enter s2:");
	          fflush(stdin);
	          gets(s2);
			  strstr(s1,s2);
	          printf("\n the sub string is %s",strstr(s1,s2));
	          break;
	default  :printf("\n\n oops!! invalid choice");
    }
    printf("\n\n continue:");
    fflush(stdin);
    ch=getchar();
    }while(ch=='y');
    printf("\n\n\n bye");
    getch();
    return(0);       
}
