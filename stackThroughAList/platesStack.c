#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "platesStack.h"

void platesStackPush(struct PlatesStack **stackHead, struct PlateData *data)
{
	struct PlatesStack *newStack = malloc(sizeof *newStack);
	newStack->top = *stackHead;
	newStack->data = data;
	*stackHead = newStack;
}

struct PlateData platesStackPeek(struct PlatesStack **stackHead)
{
	struct PlateData data;

	data.radius = (*stackHead)->data->radius;
	data.price = (*stackHead)->data->price;
	strcpy(data.color, (*stackHead)->data->color);

	return data;
}

struct PlateData platesStackPop(struct PlatesStack **stackHead)
{
	struct PlateData data = platesStackPeek(&(*stackHead));
	struct PlatesStack *oldStackHead = *stackHead;

	*stackHead = (*stackHead)->top;
	free(oldStackHead);

	return data;
}

int getPlatesStackSize(struct PlatesStack **stackHead)
{
	if (*stackHead == NULL)
	{
		return 0;
	} 

	int size = 1;
	size = size + getPlatesStackSize(&(*stackHead)->top);

	return size;
}

void platesStackFree(struct PlatesStack **stackHead)
{
	while (*stackHead != NULL)
	{
		struct PlatesStack *top = (*stackHead)->top;
		free(*stackHead);
		*stackHead = top;
	}
}

void platesStackPrint(struct PlatesStack **stackHead)
{
	struct PlatesStack *tmp = *stackHead;

	while (tmp != NULL)
	{
		printf("%d %d %s\n", tmp->data->radius, tmp->data->price, tmp->data->color);
		tmp = tmp->top;
	}
}
