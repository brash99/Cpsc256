#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int NUMBER;
	int s = 0;
	NUMBER = atoi(argv[1])*1000000;
	for (int i = 0; i<NUMBER; ++i){
		s +=1;
	}
	printf("C s: %d", s);
	return 0;
} 
