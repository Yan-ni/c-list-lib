#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#ifndef __LIST__H__
#define __LIST__H__

typedef struct list
{
	int sample;
	struct list *next;
} List;

List *newList(void);
bool isEmpty(List *li);
int listLength(List *li);
void printList(List *li);
List *push(List *li, int sample);
List *unshift(List *li, int sample);
List *pop(List *li);
List *shift(List *li);
List *clearList(List *li);


#endif