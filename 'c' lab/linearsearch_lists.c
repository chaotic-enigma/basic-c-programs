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
void search(node*);
int count = 0;
main(){
	node *head = NULL;
	int choice;
	char ch;
	printf("\n\t\t\t Linear search  in linked list");
	do{
		printf("\n\n press \n\n 1 to create \n\n 2 to search");
		printf("\n\n Choice please: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: head = (node*)malloc(sizeof(node));
					create(head);
					display(head);
					break;
			case 2: search(head);
					display(head);
					break;
		}
		printf("\n\n Do you wanna continue(y/n): ");
		fflush(stdin);
		ch = getchar();
	}while(ch != 'n');
	printf("\n\n\n\t\t\t\t\t Bye");
	getch();
	return 0;
}
void create(node *ptr){
	char ch;
	printf("\n Enter info: ");
	scanf("%d",&ptr->info);
	count++;
	printf("\n Do you like to have another node (y/n): ");
	fflush(stdin);
	ch = getchar();
	if(ch != 'n'){
		ptr->link = (node*)malloc(sizeof(node));
		create(ptr->link);
	}
	else
	ptr->link = NULL;
}
void display(node *ptr){
	while(ptr != NULL){
		printf("%d ->",ptr->info);
		ptr = ptr->link;
	}
	printf("NULL");
}
void search(node *ptr){
	int element, flag = 0;
	printf("\n Enter the element to be searched: ");
	scanf("%d",&element);
	while(ptr != NULL){
		if(ptr->info == element){
			flag = 1;
			break;
		}
		else
		ptr = ptr->link;
	}
	if(flag == 1)
	printf("\n\n Element found :-)   ");
	else
	printf("\n\n Element not found :-(   ");
}

