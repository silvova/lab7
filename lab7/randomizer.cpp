#include "randomizer.h"

int f0 = 0, f1 = 0, f2 = 0;

void my_srand() {
	f0 = 1;
	f1 = 1;
	f2 = 1;
}

int my_rand(int n) {
	if ((n == 0) || (n == 1) || (n == 2)) return 1;
	int f3 = 0;
	f3 = (f2 + f1 + f0) % MOD;
	f0 = f1;
	f1 = f2;
	f2 = f3;
	return f3;
}