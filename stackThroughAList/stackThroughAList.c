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

	printf("Radius = %d\n", platesStack->plateData->radius);
	printf("Price = %d\n", platesStack->plateData->price);
	printf("Color = %s\n", platesStack->plateData->color);

	return 0;
}
