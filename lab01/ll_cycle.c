#include <stddef.h>
#include "ll_cycle.h"
#include <stdio.h>

int ll_has_cycle(node *head) {
    	/* your code here */
	node *tortoise = head;
	node *hare = head;
	while (hare != NULL) {
		hare = hare->next;
		if (hare == NULL) return 0;
		hare = hare->next;
		if (hare == NULL) return 0;
		tortoise = tortoise->next;
		if (tortoise == hare) return 1;	
	}
	return 0;
}
int main() {
	int i = ll_has_cycle(NULL);
	if (i) {
		printf("true");
	} else {
		printf("false");
	}
	return 0;
}

