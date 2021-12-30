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
	if (*phead != NULL) newNode->next = *phead;		// *phead ilk eklemede NULL konumda yeni node gelince next i null a çekilir
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