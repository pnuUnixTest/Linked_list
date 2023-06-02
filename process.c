#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "process.h"


typedef struct Person{
     char name[20];
     char phone[20];
     struct Person* next;
} Person;


Person* Push(Person* head, char N[], char P[]) {

	//todo
	Person* tmp = NULL;

	//end

	printf("Enroll Sucess!\n");
	return tmp;
 }

void printList(Person* head) {
	
	Person* curr = head;
	printf("---List---\n");
	//todo

	//end
}

void Search(Person* head,char N[]) {

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

	Person* temp = *head;
	Person* pre = NULL;
	//todo

	//end
}
