#include <stdio.h>
#include "platesStack.h"

int main(void) 
{
    struct PlatesStack *stack = NULL;
	struct PlateData plate1 = {15, 150, "red"};   
	struct PlateData plate2 = {12, 100, "green"};
	struct PlateData plate3 = {10, 11, "yellow"};
	platesStackPush(&stack, &plate1);
	platesStackPush(&stack, &plate2);
	platesStackPush(&stack, &plate3);
	struct PlatesStack *platesPop = platesStackPeek(&stack);
	struct PlatesStack *platesPeek = platesStackPop(&stack);

    platesStackPrint(&stack);

    int stackSize = getPlatesStackSize(&stack);
    printf("\nStack size = %d\n", stackSize);

    platesStackFree(&stack);

    return 0;
}
