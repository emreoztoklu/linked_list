/*
	Author = Emre �ZTOKLU
	Date   = 15.12.2021
	Linked List = Ba�l� Liste

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

 	insertoListnPosition(&head, 2, 1);
	insertoListnPosition(&head, 3, 2);
	insertoListnPosition(&head, 4, 1);
	insertoListnPosition(&head, 5, 2);
	printTheList(&head);

}


