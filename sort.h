#ifndef sort_h
#define sort_h
#include <stdlib.h>
#include <stdio.h>

void print_array(const int *array, size_t size);
void swap_sort(int *xp, int *yp);

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Points to the previous element of the list
 * @next: Points to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void insertion_sort_list(listint_t **list);
void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
/*Selection sort*/
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
int findmax(int *array, size_t size);
int count(int *array, size_t size, int val);
void merge_sort(int *array, size_t size);
void merge(int *array, int low, int middle, int high, int *temp);
void merge_sorty(int *array, int low, int high, int *temp);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void counting_sort_r(int *array, size_t size, int pos, int *out, int *ca);
void bitonic_sort(int *array, size_t size);
void swapint(int *l, int *r);
void b_sort(int *array, int low, int count, int dir, size_t size);
void b_merge(int *array, int low, int count, int dir, size_t size);
void quick_sort_hoare(int *array, size_t size);
int partition_hoare(int *a, int l, int h);
#endif
