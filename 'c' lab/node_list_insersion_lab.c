#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list{
	int info;
	struct list *link;
};
typedef struct list node;
void create(node*);
void display(node*);
node *insert(node*);
int count = 0;
main(){
	node *head = NULL;
	int choice;
	char ch;
	printf("\n\t\t\t Insertion of a node into a list \n\n\n");
	do{
		printf("\n press \n\n\t 1 to create \n\n\t 2 to insert");
		printf("\n\n Enter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1 : head = (node*)malloc(sizeof(node));
					 create(head);
					 display(head);
					 break;
			case 2 : head = insert(head);
					 display(head);
					 break;
		}
		printf("\n\n continue (y): ");
		fflush(stdin);
		ch = getchar();
	}while(ch=='y');
	printf("\n\n\n\t\t\t\t\t Bye \n\n\n");
	getch();
	return(0);
}
void create(node *ptr){
	char ch;
	printf("\n\n Enter info: ");
	scanf("%d",&ptr->info);
	count++;
	printf("\n\n Another node? (y): ");
	fflush(stdin);
	ch = getchar();
	if(ch == 'y'){
		ptr->link = (node*)malloc(sizeof(node));
		create(ptr->link);
	}
	else
	ptr->link = NULL;
}
void display(node *ptr){
	while(ptr!=NULL){
		printf("%d->",ptr->info);
		ptr = ptr->link;
	}
	printf("NULL");
}
node *insert(node *ptr){
	int pos,i = 1;
	node*newnode,*temp = ptr;
	newnode = (node*)malloc(sizeof(node));
	printf("\n Enter info: ");
	scanf("%d",&newnode->info);
	printf("\n Enter the position(1-%d)",count+1);
	scanf("%d",&pos);
	if(pos<=count+1){
		count++;
		if(pos==1){
			newnode->link = ptr;
			ptr = newnode;
		}
		else{
			while(i<pos-1){
				temp = temp->link;
				i++;
			}
			newnode->link = temp->link;
			temp->link = newnode;
		}		
	}
	else
	printf("\n Invalid position");
	return ptr;
}

