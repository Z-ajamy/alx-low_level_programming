#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen_ - String length
 *
 * @s: The string to be measured
 *
 * Return: The length of @s
 */
unsigned int _strlen_(const char *s)
{
	unsigned int l;

	l = 0;
	while (s && s[l])
		++l;
	return (l);
}

/**
 * _strdup_ - Duplicates a string
 *
 * @str: The string to be duplicated
 *
 * Return: The ducplicated string
 */
char *_strdup_(const char *str)
{
	char *s;
	int len;

	len = _strlen_(str);
	s = malloc(sizeof(*s) * (len + 1));
	if (!s)
		return (NULL);
	while (len >= 0)
	{
		s[len] = str[len];
		--len;
	}
	return (s);
}

/**
 * _create_list - Create a list
 *
 * @n: Number of elements
 *
 * Return: A pointer to the first element of the created list
 */
list_t *_create_list(unsigned int n, ...)
{
	va_list args;
	list_t *list;
	list_t *tmp;
	list_t *prev;
	unsigned int i;
	char *str;

	va_start(args, n);
	prev = tmp = list = NULL;
	i = 0;
	while (i < n)
	{
		str = va_arg(args, char *);
		tmp = malloc(sizeof(*tmp));
		if (!tmp)
			return (NULL);
		tmp->str = _strdup_(str);
		tmp->len = _strlen_(str);
		tmp->next = NULL;
		if (!list)
			list = tmp;
		if (prev)
			prev->next = tmp;
		prev = tmp;
		++i;
	}
	va_end(args);
	return (list);
}

/**
 * _free_list - Free a list
 *
 * @list: A pointer to the first element of a list to free
 */
void _free_list(list_t *list)
{
	if (list)
	{
		_free_list(list->next);
		free(list->str);
		free(list);
	}
}

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *list;
	size_t n;

	list = _create_list(130, "Buy it, use it, break it, fix it,", "Trash it, change it, mail - upgrade it,", "Charge it, point it, zoom it, press it,", "Snap it, work it, quick - erase it,", "Write it, cut it, paste it, save it,", "Load it, check it, quick - rewrite it,", "Plug it, play it, burn it, rip it,", "Drag and drop it, zip - unzip it,", "Lock it, fill it, call it, find it,", "View it, code it, jam - unlock it,", "Surf it, scroll it, pause it, click it,", "Cross it, crack it, switch - update it,", "Name it, rate it, tune it, print it,", "Scan it, send it, fax - rename it,", "Touch it, bring it, pay it, watch it,", "Turn it, leave it, start - format it.", "Buy it, use it, break it, fix it,", "Trash it, change it, mail - upgrade it,", "Charge it, point it, zoom it, press it,", "Snap it, work it, quick - erase it,", "Write it, cut it, paste it, save it,", "Load it, check it, quick - rewrite it,", "Plug it, play it, burn it, rip it,", "Drag and drop it, zip - unzip it,", "Lock it, fill it, call it, find it,", "View it, code it, jam - unlock it,", "Surf it, scroll it, pause it, click it,", "Cross it, crack it, switch - update it,", "Name it, rate it, tune it, print it,", "Scan it, send it, fax - rename it,", "Touch it, bring it, pay it, watch it,", "Turn it, leave it, start - format it.", "Technologic", "Technologic", "Technologic", "Technologic", "Buy it, use it, break it, fix it,", "Trash it, change it, mail - upgrade it,", "Charge it, point it, zoom it, press it,", "Snap it, work it, quick - erase it,", "Write it, cut it, paste it, save it,", "Load it, check it, quick - rewrite it,", "Plug it, play it, burn it, rip it,", "Drag and drop it, zip - unzip it,", "Lock it, fill it, call it, find it,", "View it, code it, jam - unlock it,", "Surf it, scroll it, pause it, click it,", "Cross it, crack it, switch - update it,", "Name it, rate it, tune it, print it,", "Scan it, send it, fax - rename it", "Touch it, bring it, pay it, watch it,", "Turn it, leave it, start - format it.", "Buy it, use it, break it, fix it,", "Trash it, change it, mail - upgrade it,", "Charge it, point it, zoom it, press it,", "Snap it, work it, quick - erase it,", "Write it, cut it, paste it, save it,", "Load it, check it, quick - rewrite it,", "Plug it, play it, burn it, rip it,", "Drag and drop it, zip - unzip it", "Touch it, bring it, pay it, watch it,", "Turn it, leave it, start - format it.", "Surf it, scroll it, pause it, click it,", "Cross it, crack it, switch - update it", "Lock it, fill it, call it, find it,", "View it, code it, jam - unlock it,", "Buy it, use it, break it, fix it,", "Trash it, change it, mail - upgrade it,", "Charge it, point it, zoom it, press it,", "Snap it, work it, quick - erase it,", "Write it, cut it, paste it, save it,", "Load it, check it, quick - rewrite it,", "Surf it, scroll it, pause it, click it,", "Cross it, crack it, switch - update it", "Name it, rate it, tune it, print it,", "Scan it, send it, fax - rename it", "Touch it, bring it, pay it, watch it,", "Turn it, leave it, start - format it.", "Buy it, use it, break it, fix it,", "Trash it, change it, mail - upgrade it,", "Charge it, point it, zoom it, press it,", "Snap it, work it, quick - erase it,", "Write it, cut it, paste it, save it,", "Load it, check it, quick - rewrite it,", "Plug it, play it, burn it, rip it,", "Drag and drop it, zip - unzip it", "Surf it, scroll it, pause it, click it,", "Cross it, crack it, switch - update it,", "Name it, rate it, tune it, print it,", "Scan it, send it, fax - rename it", "Touch it, bring it, pay it, watch it,", "Turn it, leave it, start - format it.", "Buy it, use it, break it, fix it,", "Trash it, change it, mail - upgrade it,", "Charge it, point it, zoom it, press it,", "Snap it, work it, quick - erase it,", "Write it, cut it, paste it, save it,", "Load it, check it, quick - rewrite it,", "Plug it, play it, burn it, rip it,", "Drag and drop it, zip - unzip it", "Surf it, scroll it, pause it, click it,", "Cross it, crack it, switch - update it,", "Name it, rate it, tune it, print it,", "Scan it, send it, fax - rename it", "Buy it, use it, break it, fix it,", "Trash it, change it, mail - upgrade it,", "Charge it, point it, zoom it, press it,", "Snap it, work it, quick - erase it,", "Write it, cut it, paste it, save it,", "Load it, check it, quick - rewrite it,", "Plug it, play it, burn it, rip it,", "Drag and drop it, zip - unzip it", "Lock it, fill it, call it, find it,", "View it, code it, jam - unlock it,", "Surf it, scroll it, pause it, click it,", "Cross it, crack it, switch - update it,", "Name it, rate it, tune it, print it,", "Scan it, send it, fax - rename it,", "Touch it, bring it, pay it, watch it,", "Turn it, leave it, start - format it.", "Technologic", "Technologic", "Technologic", "Technologic", "Technologic", "Technologic", "Technologic", "Technologic", "Technologic", "Technologic");
	n = print_list(list);
	printf("-> %lu elements\n", n);
	_free_list(list);
	return (0);
}
