#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "process.h"

/**
struct Person is for storing persnoal information.
It has name, phone, and pointer which points to another Person. 
You have to use this struct. Do not change this definition.
**/
typedef struct Person{
     char name[20];
     char phone[20];
     struct Person* next;
} Person;


Person* Push(Person* head, char N[], char P[]) {
	/**
	This function creates a new Person and push it to the front of the list. The newly created Person should be the new head of the list
	Returns: Pointer to the new head of the list
	**/
	//todo
	Person* tmp = NULL;

	//end

	printf("Enroll Sucess!\n");
	return tmp;
 }

void printList(Person* head) {
	/**
	This function prints all Person information in the list. Each Person information should be printed in a new line. E.g:
	---List---
	Person A	01012345678
	Person B	02098765432
	**/
	Person* curr = head;
	printf("---List---\n");
	//todo

	//end
}

void Search(Person* head,char N[]) {
	/**
	This function find Person with name N in the list and print their infomation. If the Person does not exist, print "Could not find"
	**/
	Person* curr = head;
	int isfind = 1;

	//todo
	while(curr != NULL){

	}
	//end

	if(isfind == 1){
		printf("%s Could not find\n",N);
	}
}

void Delete(Person** head,char N[]) {
	/**
	This function deletes all Person in the list with name N. The list should stay linked and you should be able to print the list normally.
	If there is no such Person, you should print "Could not find"
	**/
	Person* temp = *head;
	Person* pre = NULL;
	//todo

	//end
}
