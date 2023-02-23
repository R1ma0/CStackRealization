#include <stdio.h>
#include "stackThroughAList.h"

int main(void) 
{
	struct Plate *platesStack = NULL;
	struct PlateData plate1 = {15, 150, "red"};
	struct PlateData plate2 = {10, 144, "green"};

	psPush(&platesStack, &plate1);
	psPush(&platesStack, &plate2);

	printf("\nInitial\n");
	psPrint(&platesStack);
	struct Plate *platePop = psPop(&platesStack);
	printf("\nAfter pop\n");
	psPrint(&platesStack);

	psClear(&platesStack);
	
	return 0;
}
