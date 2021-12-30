/*
	Author = Emre ÖZTOKLU
	Date   = 15.12.2021
	Linked List = Baðlý Liste

	Example_2
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "linkedlist.h"


pNODE head;

int x = 0;
int y = 0;

int main() {


	head = NULL;			//empty list


	/* test1
 	insertoListnPosition(&head, 2, 1);
	insertoListnPosition(&head, 3, 2);
	insertoListnPosition(&head, 4, 1);
	insertoListnPosition(&head, 5, 2);
	printTheList(&head);
	*/

	/*Test2*/
	inserttoList(&head, 2);
	inserttoList(&head, 3);
	inserttoList(&head, 4);
	inserttoList(&head, 5);
	inserttoList(&head, 6);
	printTheList(&head);

	deleteNodenPosition(&head, 3);
	printTheList(&head);
}


