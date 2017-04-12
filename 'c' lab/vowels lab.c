#include<stdio.h>
#include<conio.h>
main()
{
	int i,k=0;
	char s[10],ch;
	printf("vowels in the string");
	printf("\n\n enter the string:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		switch(s[i])
		{
			case 'a' : k++;
				       break;
			case 'e' : k++;
			           break;
			case 'i' : k++;
			           break;
			case 'o' : k++;
			           break;
			case 'u' : k++;
			           break;
			default  : break;
		}
	}
	printf("\n\n the vowels are: %d",k);
    printf("\n\n bye");
	getch();
	return(0);	
}
