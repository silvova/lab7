#include <stdio.h>
#include "randomizer.h"

int main() {
	int number[MOD] = { 0 };
	my_srand();
	for (int i = 0; i <= N; i++) {
		int x = my_rand(i);
		number[x]++;
	}
	for (int i = 0; i < MOD; i++) {
		float k = (1.0)*number[i] / N;
		printf("Frequency of the number %d - %f\n", i, k);
	}
	return 0;
}