#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "platesStack.h"

int main(void)
{
    struct PlatesStack *stack = NULL;

    char wordchecker[15];
    char negativeanswer[3] = "no";
    int isInputNotEnd = 1;
    struct PlateData plate1;


    while (isInputNotEnd)
    {
        printf("In while\n");
        printf("Enter plate specifications: radius, price, colour \n");
        scanf("%d", &plate1.radius);
        scanf("%d", &plate1.price);
        scanf("%s", &plate1.color);
        printf("\nTest: %d %d %s \n", plate1.radius, plate1.price, plate1.color);
        platesStackPush(&stack, &plate1);

        printf("Do you want add one more plate? \n");
        scanf("%s", &wordchecker);
        if (strcmp (wordchecker, negativeanswer) == 0)
        {
                isInputNotEnd = 0;
                platesStackPrint(&stack);
        }
    }

//    struct PlateData plate1 = {15, 150, "red"};
//	struct PlateData plate2 = {12, 100, "green"};
//	struct PlateData plate3 = {10, 11, "yellow"};
//
//	platesStackPush(&stack, &plate1);
//	platesStackPush(&stack, &plate2);
//	platesStackPush(&stack, &plate3);
//
//	int stackSize = getPlatesStackSize(&stack);
//    printf("\nStack size = %d\n", stackSize);
//
//	struct PlateData platesPeek = platesStackPeek(&stack);
//	printf("\nPeek: %d %d %s \n", platesPeek.radius, platesPeek.price, platesPeek.color);
//	platesStackPrint(&stack);
//
//	struct PlateData platesPop = platesStackPop(&stack);
//	printf("\nPop: %d %d %s \n", platesPop.radius, platesPop.price, platesPop.color);
//	platesStackPrint(&stack);
//
//    stackSize = getPlatesStackSize(&stack);
//    printf("\nStack size = %d\n", stackSize);
//
//	printf("\nStack: \n");
//	platesStackPrint(&stack);
//
//    platesStackFree(&stack);

    return 0;
}
