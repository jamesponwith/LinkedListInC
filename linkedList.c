#include <stdlib.h>
#include <stdio.h>
#include "List.h"

/*
typedef struct node {
	    int val;
		    struct node * next;
} node_t;
*/

int main() {

	node_t *head = NULL;

	AddBeg(&head, 5);
	printf("%d\n%p\n",head->val, head->next);
	printf("%s\n","Hello");
	return 0;
}

/*

void PrintList(node_t *head) {
	node_t *current = head;

	if(head == NULL)
		return;

	while(current != NULL) {
		printf("%d\n", current -> val);
		current = current -> next;
	}
}

// Add item to the beginning of the list 
void AddBeg(node_t **head, int val) {
	node_t *new_node;
	new_node = malloc(sizeof(node_t));

	new_node -> val = val;
	new_node -> next = *head;
	*head = new_node;
}


//  Add item to the end of the list
void AddEnd(node_t *head, int val) {
	node_t *current = head;
	while(current -> next != NULL) {
		current = current -> next;
	}

	current -> next = malloc(sizeof(node_t));
	current -> next -> val = val;
	current -> next -> next = NULL;
}

*/
