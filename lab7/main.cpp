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
		printf("Number %d repeated %d times\n", i, number[i]);
	}
	return 0;
}