
void reverse(struct node *head){
	struct node *prev, *current, *next;
	current = head;
	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
}