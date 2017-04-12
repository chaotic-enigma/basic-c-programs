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
node *insert(node*);
int count=0;      
main(){
    node *head=NULL;
    int choice;
    char ch;
    printf("\n\t\t\t Insertion of a node in the lists:-) ");
    do{
        printf("\n press \n\n 1. Create \n\n 2. Insert");
        printf("\n\n Choice please: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: head=(node*)malloc(sizeof(node));
                    create(head);
                    display(head);
                    break;
            case 2: head=insert(head);
                    display(head);
                    break;
        }
        printf("\n\n Do you wanna continue(y/n): ");
        fflush(stdin);
        ch=getchar();
    }while(ch!='n');
    getch();
    printf("\n\n\n\t\t\t\t Bye \n\n");
    return 0;
}
void create(node *ptr){
    char ch;
    printf("\n Enter the info:");
    scanf("%d",&ptr->info);
    count++;
    printf("\n Do you like to have another node(y):");
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
node *insert(node *ptr){
    int pos,i=1;
    node *newnode,*temp=ptr;                   
    newnode=(node*)malloc(sizeof(node));
    printf("\n Enter the info:");
    scanf("%d",&newnode->info);
    printf("\n Enter the position(1-%d):",count+1);
    scanf("%d",&pos);
    if(pos<=count+1){
    count++;     
        if(pos==1){
            newnode->link=ptr;
            ptr=newnode;
        }
        else{
            while(i<pos-1){
                temp=temp->link;
                i++;
            }
            newnode->link=temp->link;
            temp->link=newnode;
        }
    }
    else
    printf("\n Try again... its an invalid position :-(    ");
	return ptr;
}            

