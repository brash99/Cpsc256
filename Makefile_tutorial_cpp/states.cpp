#include <iostream>
#include "functions.h"

using namespace std;

int main(){

int nballs=9;
int nbaskets=4;
int nstates = 0;
for (int i=0; i<=nballs; i++){
	for (int j=0; j<=(nballs-i); j++){
		for (int k=0; k<=(nballs-i-j); k++){
				int l = nballs - i - j - k;
				nstates++;
				cout << i << " " << j << " " << k << " " << l << endl;
		}
	}
}
cout << endl;
cout << "Total number of states = " << nstates << endl;

int numerator = factorial(nbaskets+nballs-1);
int denom1 = factorial(nballs);
int denom2 = factorial(nbaskets-1);

cout << numerator << " " << denom1 << " " << denom2 << endl;
int nstates_theory=numerator/denom1/denom2;

cout << "Total number of states (theory) = " << nstates_theory << endl;

return 0;
}
