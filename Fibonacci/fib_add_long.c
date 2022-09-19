#include <stdlib.h>
#include <stdio.h>
#include <math.h>

long long int Fibonacci(int n) {


	long long int t1 = 0;
	long long int t2 = 1;
	long long int new_t;

	for (int i=2; i<=n; i++) {
		new_t = t1 + t2;
		t1 = t2;
		t2 = new_t;
		//printf("%d\n",new_t);
	}

	if (n<0) {
		return -1;
	} else {
		return (long long int)new_t; 
	}
}

int main(int argc, char **argv) {

	int startNum = atoi(argv[1]);

	printf("Fibonnacci(%d) is %lli\n", startNum, Fibonacci(startNum));

	return 0;
}
