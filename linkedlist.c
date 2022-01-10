#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "linkedlist.h"


static pNODE createNode(void) {
	pNODE newNode;
	if (!(newNode = (pNODE)malloc(sizeof(NODE)))) {
		fprintf(stderr, "Can not create a NODE!");
		exit(EXIT_FAILURE);
	}
	newNode->data = 0;
	newNode->next = NULL;

	return newNode;
}


void inserttoList(pNODE* phead, DATATYPE val) {
	pNODE newNode = createNode();
	newNode->data = val;
	newNode->next = NULL;
	if (*phead != NULL) 
		newNode->next = *phead;		// *phead ilk eklemede NULL konumda yeni node gelince next i null a çekilir
	
	*phead = newNode;
}

void insertoListnPosition(pNODE *phead, DATATYPE val, size_t npos) {
	pNODE newNode = createNode();

	newNode->data = val;
	newNode->next = NULL;
	
	if (npos == 1) {
		newNode->next = *phead;  /*phead baþta NULL  */
		*phead = newNode;
		return;
	}

	pNODE temp2 = *phead;  

	for (int i = 0; i < npos-2 ; i++){
		temp2 = temp2->next;
	}

	newNode->next = temp2->next;
	temp2->next = newNode;
}

void printTheList(pNODE *head) {

	pNODE temp = *head;

	printf("List is:\n");
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

//Delete node at n position
void deleteNodenPosition(pNODE *head, size_t npos) {
	
	pNODE temp1 = *head;

	if (npos == 1) {
		(* head) = temp1->next;
		free(temp1);
		return;
	}

	for (int i = 0; i < npos - 2; i++)
		temp1 = temp1->next;			//temp1 points to (npos - 1)th Node
	
	pNODE temp2 = temp1->next;			//n th Node
	temp1->next = temp2->next;			//n+1 th Node;
	free(temp2);						//delete temp2;
}

