#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct list_s - Node of a singly linked list
 * @str: Pointer to a null-terminated string that is dynamically allocated
 * @len: The length of the string stored in 'str' (not including null terminator)
 * @next: Pointer to the next node in the list, or NULL if it is the last node
 *
 * Description: This structure represents a single node in a singly linked list.
 * Each node contains a copy of a string, the length of that string, and a link
 * to the next node in the list. The list can be traversed using the 'next' pointer.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - Prints all the elements of a list_t linked list
 * @h: Pointer to the head node of the linked list
 *
 * Return: The number of nodes printed
 *
 * Description: This function iterates through the entire linked list starting
 * from the node pointed to by 'h'. For each node, it prints the length and
 * string. If a node's string is NULL, it prints "(nil)".
 */
size_t print_list(const list_t *h);

/**
 * list_len - Counts the number of nodes in a list_t linked list
 * @h: Pointer to the head node of the linked list
 *
 * Return: The total number of nodes in the list
 *
 * Description: This function traverses the entire linked list and returns
 * the number of nodes by incrementing a counter until the end is reached.
 */
size_t list_len(const list_t *h);

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the linked list
 * @str: Pointer to the string to store in the new node
 *
 * Return: Address of the new element, or NULL if it fails
 *
 * Description: This function allocates memory for a new node, creates
 * a duplicate of the input string, and inserts the new node at the start
 * of the list. It updates the head pointer accordingly.
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the linked list
 * @str: Pointer to the string to store in the new node
 *
 * Return: Address of the new element, or NULL if it fails
 *
 * Description: This function creates a new node, duplicates the given string,
 * and appends the new node to the end of the list. If the list is empty,
 * the new node becomes the head.
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - Frees all the nodes of a list_t linked list
 * @head: Pointer to the head of the list to be freed
 *
 * Description: This function traverses the entire list, freeing the
 * dynamically allocated strings and nodes one by one to avoid memory leaks.
 */
void free_list(list_t *head);

/**
 * len - Calculates the length of a string (helper function)
 * @str: Pointer to a null-terminated string
 *
 * Return: The number of characters in the string (excluding the null byte)
 *
 * Description: This utility function mimics the behavior of strlen() but is
 * implemented manually. It counts characters until it finds the '\0'.
 */
int len(const char *str);

#endif /* LISTS_H */
