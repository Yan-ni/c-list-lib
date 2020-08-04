#include "list.h"

List *newList(void)
{
	return NULL;
}

bool isEmpty(List *li)
{
	return !li;
}

int listLength(List *li)
{
	int count = 0;

	while(li != NULL)
	{
		count++;
		li = li->next;
	}

	return count;
}

void printList(List *li)
{
	if(isEmpty(li)) printf("nothing to print, the list is empty.\n");

	while(li != NULL)
	{
		printf("sample : %d\n", li->sample);
		li = li->next;
	}

	return;
}

List *push(List *li, int sample)
{
	List *el;

	el = malloc(sizeof(*el));
	if(el == NULL)
	{
		fprintf(stderr, "erreur d'allocation dynamique.\n");
		exit(EXIT_FAILURE);
	}

	el->sample = sample;
	el->next = NULL;

	if(isEmpty(li)) return el;

	List *tmp = li;

	while(tmp->next != NULL) tmp = tmp->next;

	tmp->next = el;

	return li;
}

List *unshift(List *li, int sample)
{
	List *el;
	el = malloc(sizeof(*el));
	if(el == NULL)
	{
		fprintf(stderr, "erreur d'allocation dynamique.\n");
		exit(EXIT_FAILURE);
	}

	el->sample = sample;
	el->next = li;

	return el;
}

List *pop(List *li)
{
	if(isEmpty(li)) return li;

	if(li->next == NULL)
	{
		free(li);
		return newList();
	}

	List *tmp = li, *previous;
	
	while(tmp->next != NULL) 
	{
		previous = tmp;
		tmp = tmp->next;
	}

	free(tmp);
	previous->next = NULL;

	return li;
}

List *shift(List *li)
{
	List *tmp = li->next;

	free(li);

	return tmp;
}

List *clearList(List *li)
{
	while(li != NULL)
	{
		free(li);
		li = li->next;
	}

	return newList();
}