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

				//todo
				list = Push(___[1]___);
				//end
				
				break;
			case 2:

				//todo
				printList(___[2]___);
				//end

				break;
			case 3:
				printf("Name: ");
				scanf("%s",name);

				//todo
				Search(___[3]___);
				//end

				break;
			case 4:
				printf("Name: ");
				scanf("%s",name);

				//todo
				Delete(___[4]___);
				//end

				break;
			case 5:
				printf("Program Quit.\n");
				break;
		}
		printf("\n");
 	}
	return 0;
}
