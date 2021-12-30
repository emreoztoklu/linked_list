#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef int DATATYPE;

typedef struct tagNode {
	DATATYPE data;
	struct tagNode* next;

}NODE, * pNODE;


/*add a data in list function*/
void inserttoList(pNODE *phead, DATATYPE* val); 

/*insert data n pos*/
void insertoListnPosition(pNODE *phead, DATATYPE val, size_t npos); 

/*show  the list*/
void printTheList(pNODE *head);					

/*delete element*/
void deleteNodenPosition(pNODE* head, size_t npos);



#endif



/*
	Application Memories

	 4) Heap						--> Free Store
	 3) Stack

			+ inserttoListnPosition
				val npos 
						temp1( heap )
							4) Heap  adress 150   (2 , NULL)   "malloc" 
			+ main
				

	 2) Static/Global
			
			pNODE head (NULL)
			
	 1) Code(Text) 



*/