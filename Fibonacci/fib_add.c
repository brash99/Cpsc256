#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int Fibonacci(int n) {


	int t1 = 0;
	int t2 = 1;
	int new_t;

	for (int i=2; i<=n; i++) {
		new_t = t1 + t2;
		t1 = t2;
		t2 = new_t;
		//printf("%d\n",new_t);
	}

	if (n<0) {
		return -1;
	} else {
		return (int)new_t;
	}
}

int main(int argc, char **argv) {

	int startNum = atoi(argv[1]);

	printf("Fibonnacci(%d) is %d\n", startNum, Fibonacci(startNum));

	return 0;
}
