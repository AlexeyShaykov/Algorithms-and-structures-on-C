#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int number) {
	if (number < 2) return false;

	if (number == 2) return true;

	if (number % 2 == 0) return false;

	int i = 3;
	int limit = sqrt(number);

	while (i < limit)
	{
		if (number % i == 0) {
			return false;
		} else {
			i += 1;
		}
	}
	return true;
}

int main(int argc, char* argv[]) {
	char *a = argv[1];
  int num = atoi(a);
	if (isPrime(num)) {
		printf("Number is Prime\n");
	} else {
		printf("Number is not Prime\n");
	}
	return 0;
}
