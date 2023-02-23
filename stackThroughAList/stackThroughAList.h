#ifndef STACK_THROUGH_A_LIST
#define STACK_THROUGH_A_LIST

#include <stdlib.h>
#include <string.h>

struct PlateData
{
	int radius;
	int price;
	char color[15];
};

struct Plate 
{
	struct Plate *top;
	struct PlateData *plateData;
};

void psPush(struct Plate **stackHead, struct PlateData *plateData)
{
	struct Plate *newPlate = malloc(sizeof(struct Plate));
	newPlate->top = *stackHead;
	newPlate->plateData = plateData;
	*stackHead = newPlate;
}

struct Plate *psPeek(struct Plate **stackHead)
{
	struct Plate *plate = malloc(sizeof(struct Plate));
	struct PlateData *data = malloc(sizeof(struct PlateData));

	data->radius = (*stackHead)->plateData->radius;
	data->price = (*stackHead)->plateData->price;
	strcpy(data->color, (*stackHead)->plateData->color);

	plate->plateData = data;
	plate->top = (*stackHead)->top;

	return plate;
}

struct Plate *psPop(struct Plate **stackHead)
{
	struct Plate *plate = psPeek(&(*stackHead));

	struct Plate *oldStackHead = *stackHead;
	*stackHead = (*stackHead)->top;
	free(oldStackHead);

	return plate;
}

int psSize(struct Plate **stackHead)
{
	if (*stackHead == NULL)
	{
		return 0;
	} 

	int size = 1;
	size = size + psSize(&(*stackHead)->top);

	return size;
}

void psClear(struct Plate **stackHead)
{
	while (*stackHead != NULL)
	{
		struct Plate *top = (*stackHead)->top;
		free(*stackHead);
		*stackHead = top;
	}
}

#endif
