#include <stdio.h>
#include "stackThroughAList.h"

int main(void) 
{
	struct Plate *platesStack = NULL;
	struct PlateData plate1 = {15, 150, "red"};
	struct PlateData plate2 = {10, 144, "green"};

	psPush(&platesStack, &plate1);
	psPush(&platesStack, &plate2);

	int stackSize = psSize(&platesStack);
	printf("Stack size = %d\n", stackSize);

	printf("\nradius = %d\n", platesStack->plateData->radius);
	printf("price = %d\n", platesStack->plateData->price);
	printf("color = %s\n", platesStack->plateData->color);

	struct Plate *plateCopy = psPop(&platesStack);

	printf("\nPop radius = %d\n", plateCopy->plateData->radius);
	printf("price = %d\n", plateCopy->plateData->price);
	printf("color = %s\n", plateCopy->plateData->color);

	printf("\nradius = %d\n", platesStack->plateData->radius);
	printf("price = %d\n", platesStack->plateData->price);
	printf("color = %s\n", platesStack->plateData->color);

	psClear(&platesStack);
	
	return 0;
}
