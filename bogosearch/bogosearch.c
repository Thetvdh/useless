#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NELEMS(x) sizeof(x) / sizeof(x[0])


int bogoSearch(int *arr, int arrLen, int searchVal) {
	
	int random;
	srand(time(NULL));
	
	do {
		
		random = rand() % arrLen;
	
	} while(arr[random] != searchVal);
	
	return random;
	
}


int main(int argc, char** argv) {
	
	
	int array[1000000];
	
	for(int i =0; i < 1000000; i++) {
		
		array[i] = i;
		
	}
	
	int location = bogoSearch(array, NELEMS(array), atoi(argv[1]));
	
	printf("Value found at position %d\n", location);
	
	return 0;
	
}