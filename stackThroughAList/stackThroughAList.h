#ifndef STACK_THROUGH_A_LIST
#define STACK_THROUGH_A_LIST

#include <stdlib.h>

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
//plateData psPop()
//plateData psPeek()
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
//void psClear()

#endif
