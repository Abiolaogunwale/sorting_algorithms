#ifndef SORTING_H
#define SORTING_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
int len_list(listint_t *h);
void swap_element(listint_t *a, listint_t *b, listint_t **head);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_recursion(int *array, int left, int right, size_t size);
void _qsort(int *array, int low, int high, size_t size);
int partition_array(int *array, int left, int right, size_t size);
void swap(listint_t **list, listint_t *node);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void quicksort(int *array, ssize_t lo, ssize_t hi, size_t size);
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size);

#endif