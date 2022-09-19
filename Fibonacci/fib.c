#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int Fibonacci(int n) {
	double phi = (sqrt(5.0)+1.0)/2.0;
	double f = (pow(phi,n) - pow(-1.0*phi,-1.0*n))/sqrt(5.0);
	
	if (n<0) {
		return -1;
	} else {
		return (int)f;
	}
}

int main(int argc, char **argv) {

	int startNum = atoi(argv[1]);

	printf("Fibonnacci(%d) is %d\n", startNum, Fibonacci(startNum));

	return 0;
}
