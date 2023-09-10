#include <stdio.h>
#include "usefulheap.h"

int main(void)
{
	Heap heap;
	HeapInit(&heap ,DataPriority);

	HInsert(&heap, 'A');
	HInsert(&heap, 'B');
	HInsert(&heap, 'C');
	printf("%c \n", HDelete(&heap));

	HInsert(&heap, 'A');
	HInsert(&heap, 'B');
	HInsert(&heap, 'C');
	printf("%c \n", HDelete(&heap));

	while(!HIsEmpty(&heap))
		printf("%c \n", HDelete(&heap));

	return 0;
}
