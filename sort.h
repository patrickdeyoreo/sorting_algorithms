#ifndef _SORT_H_
#define _SORT_H_

#include <stdlib.h>

/**
 * struct listint_s - doubly-linked list node
 *
 * @n: integer stored in the node
 * @prev: pointer to the previous element of the list
 * @next: pointer to the next element of the list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);

#endif /* _SORT_H_ */
