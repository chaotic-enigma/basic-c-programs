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
node *del(node*);
int count=0;
main(){
	node *head=NULL;
	int choice;
	char ch;
	printf("\n\t\t Deletion of the element from the list:-)");
	do{
		printf("\n\npress \n\n 1 to create \n\n 2 to delete");
		printf("\n\n choice please: ");
		scanf("%d",&choice);
		switch(choice){
			case 1 : head=(node*)malloc(sizeof(node));
					 create(head);
					 display(head);
					 break;
			case 2 : if(head!=NULL){
					 head=del(head);
					 display(head);
					 }
					 else
					 printf("\n\n list is empty :-(");
					 break;
		}
		printf("\n\n Do you wanna continue(y/n): ");
		fflush(stdin);
		ch=getchar();
	}while(ch!='n');
	printf("\n\n\n\t\t\t\t Bye \n\n\n");
	getch();
	return(0);
}
void create(node *ptr){
	char ch;
	printf("\n Enter the info: ");
	scanf("%d",&ptr->info);
	count++;
	printf("\n Do you like to have another node(y/n): ");
	fflush(stdin);
	ch=getchar();
	if(ch!='n'){
		ptr->link=(node*)malloc(sizeof(node));
		create(ptr->link);
	}
	else
	ptr->link=NULL;
}
void display(node *ptr){
	while(ptr!=NULL){
		printf("%d->",ptr->info);
		ptr=ptr->link;
	}
	printf("NULL");
}
node *del(node *ptr){
	node *temp =ptr,*temp1=ptr;
	int i=0,pos;
	printf("\n position please: ");
	scanf("%d",&pos);
	if(pos<=count){
		if(pos==1){
			ptr=ptr->link;
		}
		else{
			while(i<pos-2){
				temp1=temp1->link;
				i++;
			}
			temp=temp1->link;
			temp1->link=temp->link;
		}
		free(temp);
		count--;
	}
	else
	printf("\n\n Try again... its an invalid position :-(   ");
	return ptr;
}

