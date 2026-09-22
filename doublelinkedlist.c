#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
	struct Node *pre;
}node;



void print(node *head){
	if(head==NULL)
	{
		printf("list is empty");
	}
	else{
		node *temp=head;
		while(temp!=NULL){
			printf("%d\n",head->data);
			head=head->next;
			}
		}
	}

int main() {
	node *head;
	head=(node *)malloc(sizeof(node));
	head->data=15;
	head->next=NULL;
	head->pre=NULL;
	head->pre=(node *)malloc(sizeof(node));
	head->next=(node *)malloc(sizeof(node));
	head->next->data=20;
	head->next->next=NULL;
	
	// buradan sonrasý listenin baþýna ekleme
	
	
	node *temp=(node *)malloc(sizeof(node));
	temp->data=12;
	temp->next=head;
	temp->pre=NULL;
	if(head!=NULL)
	{
		head->pre=temp;
	}
	head=temp;
	
	 
	//listeden bir dosya silme
	node *del=(node *)malloc(sizeof(node));
	if(head!=NULL){
		if(head->data==45){
			head=head->next;
			head->pre=NULL;
			free(temp);
		}
	}
	else{
		while(temp!=NULL &&temp->data!=key){
			temp=temp->next;
		}
	}
	if(temp==NULL){
		return head;
	}
	temp->pre->next=temp->next;
	if(temp->next!=NULL)
	{
		temp->next->pre=temp->pre;
		free(temp);
	}
	
	
	
	
	print(head);

	return 0;
}
