#ifndef STACK_THROUGH_A_LIST
#define STACK_THROUGH_A_LIST

#include <stdlib.h>

struct Plate 
{
	int radius;
	int price;
	char color[15];
};

struct PlateStack 
{
	struct PlateStack *top;
	struct Plate *plateData;
};

//void psPush(struct PlateStack **stackHead, struct Plate plateData)
//{
//	struct PlateStack *newPlate = malloc(sizeof(struct Plate));
//	newPlate->top = *stackHead;
//	newPlate->plateData = plateData;
//	*stackHead = newPlate;
//}
//plateData psPop()
//plateData psPeek()
//int psSize(struct PlateStack **stackHead)
//{
//	if ((*stackHead)->top == NULL)
//	{
//		return 0;
//	} 
//	else 
//	{
//		return 1;
//	}
//}
//void psClear()

#endif
