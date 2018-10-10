#include <stdlib.h>
#include <stdio.h>

#include "lib.h"

void print_list(struct node * x){
	struct node * mark = x;
	while(mark){
		printf("%.0lf->",mark->val);
		mark = mark->next;
	}
}

struct node * insert_front(struct node * x, double y){
	struct node * first = (struct node*)malloc(sizeof(struct node));
	first->val = y;
	first->next = x;
	return first;
}

struct node * free_list(struct node * x){
	struct node * mark = x;
	struct node * temp;
	while(mark){
		temp = mark->next;
		free(mark);
		mark = temp;
	}
	return x;
}
