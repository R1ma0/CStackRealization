#include <stdio.h>
#include "stackThroughAList.h"

int main(void) 
{
	struct PlateStack plates;
	struct Plate plate1 = {15, 150, "red"};
	plates.plateData = &plate1;

	struct PlateStack plates1;
	struct Plate plate2 = {13, 144, "green"};
	plates1.top = &plates;
	plates1.plateData = &plate2;

	printf("Plates1 plate radius = %d\n", plates1.plateData->radius);
	printf("Plates plate radius = %d\n", plates1.top->plateData->radius);

	return 0;
}
