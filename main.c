#include <stdio.h>
#include "process.h"

int main(int argc, char** argv) {
	
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
