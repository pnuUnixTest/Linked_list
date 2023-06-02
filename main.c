#include <stdio.h>

//Include “process.h” which has declaration of process function and struct type.
#include "process.h"

int main(int argc, char** argv) {
	/**
	Look at the picture of the program structure on HW09.
	In all cases, the program must operate as shown in the picture.
	
	To operate program, we use while statement.
	Each time the variable 'select' receives an integer value from the keyboard.
	
	There are five cases:
	
	case 1) Input name and phone number from keyboard and pass arguments to Push function.
	Push: receives return value of Push function that makes linked list.
	
	case 2) Call printList function.
	printList: Print linked list from head to tail.
	
	case 3) Input name from keyboard and pass arguments to Search function.
	Search: Finds item in list using name and prints the name and phone number.
	
	case 4) Input name from keyboard and pass arguments to Delete function.
	Delete: Finds item in list using name and deletes it from linked list.
	
	case 5) Exit the program.
	Already implemented.
	
	You should write the appropriate arguments in the todo part.
	hint: Read process.h carefully.
	**/
	
	int select = 0;
	Person* list = NULL;
	
	char name[20];
	char phone[20];

	while(select != 5) {
		printf("[1] Enroll    [2] List    [3] Search    [4] Delete    [5] Quit\n");
		printf("Selection: ");
		scanf("%d",&select);
		switch(select)
		{
			case 1:
				printf("Name: ");
				scanf("%s",name);
				printf("Phone: ");
				scanf("%s",phone);

				list = Push( //todo );
				
				break;
			case 2:

				printList( //todo );

				break;
			case 3:
				printf("Name: ");
				scanf("%s",name);

				Search( //todo );

				break;
			case 4:
				printf("Name: ");
				scanf("%s",name);

				Delete( //todo );

				break;
			case 5:
				printf("Program Quit.\n");
				break;
		}
		printf("\n");
 	}
	return 0;
}
