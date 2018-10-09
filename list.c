#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "lib.h"

int main(){
	srand(time(NULL));
	struct node* end = NULL;
	struct node* head = end;
	int i;
	for(i=0;i<5;i++){
		head = insert_front(head,rand()%100);
	}
	printf("list: ");
	print_list(head);
	printf("\n");
	printf("empty list: ");
	print_list(free_list(head));
	return 0;
}