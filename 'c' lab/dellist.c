#include<stdio.h>
#include<conio.h>
#include<Stdlib.h>
struct list{
    int info;
    struct list *link;
};
typedef struct list node;
void create(node*);
void display(node*);
node * del(node*);
int count=0;      
main(){
    node *head=NULL;
    int choice;
    char ch;
    printf("\n\t\t Deletion of the element from the list :-)");
    do{
    	printf("\npress \n\n 1 to Create \n\n 2 to Delete");
        printf("\n\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1: head=(node*)malloc(sizeof(node));
             		create(head);
                    display(head);
                    break;
            case 2: if(head!=NULL){
                        head=del(head);
                        display(head);
                    }
                    else
                    printf("\n\n List is empty");
                    break;
        }
        printf("\n\n Continue:");
        fflush(stdin);
        ch=getchar();
    }while(ch!='n');
    printf("\n\n\n\n\t\t\t\t\t Bye");
    getch();
    return 0;
}                                              
void create(node *ptr){
    char ch;
 	printf("\n Enter the info:");
    scanf("%d",&ptr->info);
    count++;
    printf("\n Another node:");
    fflush(stdin);
    ch=getchar();
    if(ch !='n'){
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
    node *temp=ptr,*temp1=ptr;
    int i=0,pos;
    printf("\n\n Enter the position:");
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
    printf("\n\n Invalid position");
    return ptr;
}
                   
