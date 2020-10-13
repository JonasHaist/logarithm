#include <stdio.h>
#include <math.h> // This C library adds the 'pow' function

const int PRECISION = 1000;

double ln(double argument) {
	// according to https://en.wikipedia.org/wiki/Natural_logarithm#Series

	double answer = 0;
	for (double i = 0; i <= PRECISION; i++) {
		answer += 1.0 / (2.0 * i + 1.0) * pow(pow(argument - 1.0, 2.0)/pow(argument + 1.0, 2.0), i);
	}
	answer = answer * 2.0 * (argument - 1.0) / (argument + 1.0);
	return answer;
}

int main() {
	double base, argument;
	printf("Enter the base and argument ");
	scanf("%lf %lf", &base, &argument);

	// (ln argument)/(ln base) = logbase argument
	printf("%.10f\n", ln(argument)/ln(base));
	return 0;
}
