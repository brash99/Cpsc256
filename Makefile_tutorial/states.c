#include "stdlib.h"
#include "stdio.h"
#include "functions.h"

int main(){

	int nballs=9;
	int nbaskets=4;
	int nstates = 0;
	for (int i=0; i<=nballs; i++){
		for (int j=0; j<=(nballs-i); j++){
			for (int k=0; k<=(nballs-i-j); k++){
				int l = nballs - i - j - k;
				nstates++;
				printf("%d %d %d %d\n",i,j,k,l);
			}
		}
	}
	printf("\n");
	printf("Total number of states = %d\n",nstates);

	int numerator = factorial(nbaskets+nballs-1);
	int denom1 = factorial(nballs);
	int denom2 = factorial(nbaskets-1);

	printf("%d %d %d\n",numerator,denom1,denom2);
	int nstates_theory=numerator/denom1/denom2;

	printf("Total number of states (theory) = %d\n",nstates_theory);

	return 0;
}
