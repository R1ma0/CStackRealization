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

    char operation[15];

    while (isInputNotEnd)
    {
        printf("In while\n");
        printf("Enter plate specifications: radius, price, colour \n");
        scanf("%d", &plate1.radius);
        scanf("%d", &plate1.price);
        scanf("%s", plate1.color);
        platesStackPush(&stack, plate1);

        printf("Do you want add one more plate? \n");
        scanf("%s", wordchecker);
        if (strcmp (wordchecker, negativeanswer) == 0)
        {
                isInputNotEnd = 0;
                platesStackPrint(&stack);
        }
    }


    system("pause");

   int exit = 1;
   while(exit)
    {
        printf("What operation do you want to execute? \n");
        scanf("%s", operation);
        if(strcmp (operation, "peek") == 0)
        {
            struct PlateData platesPeek = platesStackPeek(&stack);
            printf("\nPeek: %d %d %s \n", platesPeek.radius, platesPeek.price, platesPeek.color);
            platesStackPrint(&stack);
        }

        if(strcmp (operation, "pop") == 0)
        {
            struct PlateData platesPop = platesStackPop(&stack);
            printf("\nPop: %d %d %s \n", platesPop.radius, platesPop.price, platesPop.color);
            platesStackPrint(&stack);
        }

        if(strcmp (operation, "size") == 0)
        {
            int stackSize = getPlatesStackSize(&stack);
            printf("\nStack size = %d\n", stackSize);
        }
        if (strcmp (operation, "exit") == 0)
        {
            exit = 0;
            platesStackFree(&stack);
        }
   }


    return 0;
}
