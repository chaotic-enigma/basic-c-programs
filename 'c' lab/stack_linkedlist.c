#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack{
	int info;
	struct stack *link;
};
typedef struct stack node;
void push();
void pop();
void display();
node *top=NULL;
main(){
	int choice;char ch;
	printf("\n\t\t\tImplementation of stack using linked list");
	do{
		printf("\n\n press \n\n 1 to push \n\n 2 to pop");
		printf("\n\n choice please: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: push();
					display();
					break;
			case 2: if(top!=NULL){
						pop();
						display();				
					}
					else
						printf("\n Memory unrderflow");
					break;
		}
		printf("\n Do you wanna continue: ");
		fflush(stdin);
		ch=getchar();
	}while(ch!='n');
	printf("\n\n\n\t\t\t\t\t\t Bye \n\n");
	getch();	
	return 0;
}
void push(){
	node *temp;
	temp=(node*)malloc(sizeof(node));
	printf("\n Enter info: ");
	scanf("%d",&temp->info);
	temp->link=top;
	top=temp;
}
void pop(){
	node *temp;
	temp=top;
	top=top->link;
	free(temp);
}
void display(){
	node *temp=top;
	while(temp!=NULL){
		printf("%d->",temp->info);
		temp=temp->link;
	}
	printf("NULL");
}
 
