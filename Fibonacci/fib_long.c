#include <stdlib.h>
#include <stdio.h>
#include <math.h>

long long int Fibonacci(int n) {
	double phi = (sqrt(5.0L)+1.0L)/2.0L;
	double f = (pow(phi,n) - pow(-1.0L*phi,-1.0L*n))/sqrt(5.0L);
	
	if (n<0) {
		return -1;
	} else {
		return (long long int)f;
	}
}

int main(int argc, char **argv) {

	int startNum = (int)atoi(argv[1]);

	printf("Fibonnacci(%d) is %lli\n", startNum, Fibonacci(startNum));

	return 0;
}
