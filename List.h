#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdio.h>


typedef struct node {
	    int val;
		struct node * next;
} node_t;

void PrintList(node_t *head);
void AddBeg(node_t **head, int val);
void AddEnd(node_t *head, int val);
int RemoveBeg();
int RemoveEnd();
#endif
