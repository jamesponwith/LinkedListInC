#include <stdlib.h>
#include <stdio.h>
#include "List.h"

/*
 *
 */
void PrintList(node_t *head) {
	node_t *current = head;

	if(head == NULL)
		return;

	while(current != NULL) {
		printf("%d\n", current -> val);
		current = current -> next;
	}
}

/* Add item to the beginning of the list 
 * 
 */
void AddBeg(node_t **head, int val) {
	node_t *new_node;
	new_node = malloc(sizeof(node_t));

	new_node -> val = val;
	new_node -> next = *head;
	*head = new_node;
}


/*  Add item to the end of the list
 *
 */
void AddEnd(node_t *head, int val) {
	node_t *current = head;
	while(current -> next != NULL) {
		current = current -> next;
	}

	current -> next = malloc(sizeof(node_t));
	current -> next -> val = val;
	current -> next -> next = NULL;
}

/*
 *
 */
int RemoveBeg(node_t **head) {
	int ret = -1;
	node_t *next_node = NULL;

	if(*head == NULL) {
		return -1;
	}

	next_node = (*head) -> next;
	ret = (*head) -> val;
	free(*head);
	*head = next_node;

	return ret;
}

/*
 *
 */
int RemoveEnd(node_t *head) {
	int ret = 0;
	if(head -> next == NULL) {
		ret = head -> val;
		free(head);
		return ret;
	}

	node_t *curr_node = NULL;
	while(curr_node -> next -> next != NULL) {
		curr_node = curr_node -> next;
	}
	
	ret = curr_node -> next -> val;
	free(curr_node -> next);
	curr_node -> next = NULL;
	return ret;
}
