#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
};

void printList(Node *head){
	while(head != NULL){
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

Node* newNode(int x){
	Node *temp = (Node *)malloc(sizeof(Node));
	temp->data = x;
	temp->next = NULL;
	return temp;
}

Node* reverseLinkList(Node *head){
	
	Node *curr, *prev, *nextNode;
	prev = NULL;
	curr = head;
	/*
	prev -> curr -> next;

	curr -> prev

	prev' = curr;

	curr = next;
	next = curr->next;

	curr->prev -> next -> nextnext;

	*/
	while(curr != NULL){
		nextNode = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nextNode;
	}
	head = prev;
	return head;
}

int main(){
	Node *head;
	head = newNode(1);
	head->next = newNode(2);
	head->next->next = newNode(3);
	printList(head);
	head = reverseLinkList(head);
	printList(head);
	return 0;
}