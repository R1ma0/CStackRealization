#ifndef PLATES_STACK_H
#define PLATES_STACK_H

struct PlateData
{
	int radius;
	int price;
	char color[15];
};

struct PlatesStack
{
    struct PlateData data;
    struct PlatesStack *top;
};

void platesStackPush(struct PlatesStack **stackHead, struct PlateData data);
struct PlateData platesStackPeek(struct PlatesStack **stackHead);
struct PlateData platesStackPop(struct PlatesStack **stackHead);
int getPlatesStackSize(struct PlatesStack **stackHead);
void platesStackFree(struct PlatesStack **stackHead);
void platesStackPrint(struct PlatesStack **stackHead);

#endif // PLATES_STACK_H
