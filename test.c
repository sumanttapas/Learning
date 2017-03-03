#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node{
	int data;
	struct node * next;
};

void insertAtStart(struct node *head, int data){
	struct node * n = malloc(sizeof(struct node));
	n->data = data;
	n->next = head->next;
	head->next = n;
}

void printList(struct node * head){
	struct node * n = head->next;
	while(n != NULL){
		printf("%d->",n->data);
		n = n->next;
	}
}

struct node * reverseList(struct node * head){
	struct node * curr = head->next;
	struct node * prev = NULL; 
	struct node * next = NULL;
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head->next = prev;
	return head;
}

int main()
{
	struct node * head = malloc(sizeof(struct node));
	head->data = -65533;
	int i = 0;
	head->next = NULL;
	for(i = 5; i<15;i++)
		insertAtStart(head,i);
	printList(head);
	printf("\n");
	head = reverseList(head);
	printList(head);
	return 0;
}
