#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct dlist{
	int info;
	struct dlist *prev,*next;
};
typedef struct dlist node;
node*last=NULL;
void create(node*);
void fdisplay(node*);
void bdisplay(node*);
main(){
	node *head=NULL;
	int choice; 
	char ch;
	do{
		printf("\n press \n\n 1 to create \n\n 2 to forward display \n\n 3 to backward display");
		printf("\n\n Enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1: head=(node*)malloc(sizeof(node));
					head->prev=NULL;
					create(head);
					break;
			case 2: fdisplay(head);
					break;
			case 3: bdisplay(last);
					break;
		}
		printf("\n continue:");
		fflush(stdin);
		ch=getchar();
	}while(ch!='n');
	getch();
	return 0;
}
void create(node *ptr){
	node*temp;char ch;
	printf("\n Enter info: ");
	scanf("%d",&ptr->info);
	printf("\n another node?");
	fflush(stdin);
	ch=getchar();
	if(ch!='n'){
		ptr->next=(node*)malloc(sizeof(node));
		temp=ptr->next;
		temp->prev=ptr;
		create(ptr->next);
	}
	else{
		ptr->next=NULL;
	}
}
void fdisplay(node *ptr){
	while(ptr!=NULL){
		printf("%d->",ptr->info);
		ptr=ptr->next;
	}
	printf("NULL");
}
void bdisplay(node *ptr){
	while(ptr!=NULL){
		printf("%d->",ptr->info);
		ptr=ptr->prev;
	}
	printf("NULL");
}
