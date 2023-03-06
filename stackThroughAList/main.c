#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "platesStack.h"

int main(void)
{
    struct PlatesStack *stack = NULL;
    struct PlateData plate1;
    char operation[15];

    int notExit = 1;
    while(notExit)
    {
        printf("\nList of operation: push, peek, pop, size, exit\n\n");
        printf("What operation do you want to execute? \n");
        scanf("%s", operation);

        if(strcmp (operation, "push") == 0)
        {
            printf("Enter plate specifications: radius, price, colour \n");
            scanf("%d", &plate1.radius);
            scanf("%d", &plate1.price);
            scanf("%s", plate1.color);
            platesStackPush(&stack, plate1);
            printf("\nYour stack: \n");
            platesStackPrint(&stack);
        }

        if(strcmp (operation, "peek") == 0)
        {
            struct PlateData platesPeek = platesStackPeek(&stack);
            printf("\nPeek: %d %d %s \n", platesPeek.radius, platesPeek.price, platesPeek.color);
            printf("\nYour stack: \n");
            platesStackPrint(&stack);
        }

        if(strcmp (operation, "pop") == 0)
        {
            struct PlateData platesPop = platesStackPop(&stack);
            printf("\nPop: %d %d %s \n", platesPop.radius, platesPop.price, platesPop.color);
            printf("\nYour stack: \n");
            platesStackPrint(&stack);
        }

        if(strcmp (operation, "size") == 0)
        {
            int stackSize = getPlatesStackSize(&stack);
            printf("\nStack size = %d\n", stackSize);
        }

        if (strcmp (operation, "exit") == 0)
        {
            notExit = 0;
            platesStackFree(&stack);
            printf("\nGoodbye my dear!\n");
        }
   }


    return 0;
}
