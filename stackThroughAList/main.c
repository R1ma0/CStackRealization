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
        platesStackPush(&stack, plate1);

        printf("Do you want add one more plate? \n");
        scanf("%s", &wordchecker);
        if (strcmp (wordchecker, negativeanswer) == 0)
        {
                isInputNotEnd = 0;
                platesStackPrint(&stack);
        }
    }

    platesStackFree(&stack);

    return 0;
}
