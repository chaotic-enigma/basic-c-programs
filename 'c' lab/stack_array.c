#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int stack[5],top=-1;
main(){
	char ch; int choice;
	printf("\n\t\t\t Stack implementation using Arrays");
	do{
		printf("\n\n press \n\n 1 to push \n\n 2 to pop");
		printf("\n\n choice please: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: if (top<5){
					push();
					display();
					}
					else
						printf("\n\n stack overflow");
					break;
			case 2: if(top!=-1){
					pop();
					display();
					}
					else
						printf("\n\n stack underflow");
					break;
		}
		printf("\n\n Do you wish to continue: ");
		fflush(stdin);
		ch=getchar();
	}while(ch!='n');
	printf("\n\n\n\n\t\t\t\t\t Bye \n\n\n");
	getch();
	return 0;
}
void push(){
	top++;
	printf("\n\n Enter element: ");
	scanf("%d",&stack[top]);
}
void pop(){
	top--;
}
void display(){
	int i;
	for(i=top;i>=0;i--){
		printf("\t%d",stack[i]);
	}
}

